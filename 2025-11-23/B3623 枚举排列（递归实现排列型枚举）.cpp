#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e4 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

//dfs枚举全排列
// 相当于树状的枚举 枚举到树顶就输出
vector<int> ans;
bool vis[11];
int n,k;
void dfs(int m){
    // m是用来计数的，代表现在在第几层了
    if(m == k+1){
        // 到指定层数就输出
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<' ';
        }
        cout<<'\n';
    }
    for(int i=1; i<=n; i++){
        if(vis[i]) continue; // 被枚举过了就不重复走了
        vis[i] = 1; // i位置被枚举过了
        ans.push_back(i);
        dfs(m+1);
        ans.pop_back();
        vis[i] = 0; //枚举完就回溯
    }

}

void solve(){
    cin>>n>>k;
    dfs(1);
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