#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e4 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll vis[15][15]; // 应当为计数，因为某些位置重复标记，需要逐层解除
vector<int> res;
int num;
ll ans = 0;
// 防止对角线有 即 防止横纵坐标差的绝对值相等 即用树的层级和当前位置作差的绝对值
void dfs(int row){
    if(row>num){ // 递归终止条件
        ans++;
        if(ans<=3){
            for(int i=0; i<res.size(); i++){
                cout<<res[i]<<' ';
            }
            cout<<'\n';
        }
        return; // 不能忘记了！！！
    }

    for(int col=1; col<=num; col++){
        if(vis[row][col]){ // 这个位置不能占
            continue;
        }
        res.push_back(col);
        // 把对角线和对应列标记了
        for(int i=0;i<=num-row;i++){
            vis[row + i][col] ++; // 这行及以下的标记即可上面的都不用搜索了
            if(i+col <= num){
                vis[i+row][i+col] ++;
            }
            if(col-i>=1){
                vis[i+row][col-i] ++;
            }
        }
        dfs(row+1);
        // 回溯
        for(int i=0;i<=num-row;i++){
            vis[row + i][col] --;
            if(i+col <= num){
                vis[i+row][i+col] --;
            }
            if(col-i>=1){
                vis[i+row][col-i] --;
            }
        }
        res.pop_back();
    }


}

void solve(){
    cin>>num;
    dfs(1);
    cout<<ans<<'\n';
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _ = 1;
    // cin>>_;
    while (_--)
    {
        solve();
    }
    return 0;
}