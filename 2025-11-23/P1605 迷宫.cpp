#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e4 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

//DFS 
// 1.状态 2.决策 3.约束/剪枝 4.终止条件 5.回溯
const int dir[4][2] = {{-1,0},{0,-1},{1,0},{0,1}}; // 设置要进行的决策
int des_x,des_y,start_x,start_y;
ll ans = 0;
int vis[6][6], barrier[6][6],n,m; // vis是当前搜索过程走过的地方 当前搜索走完需要清理痕迹（回溯）
void dfs(int next_x, int next_y){
    if(next_x == des_x && next_y == des_y){
        ans++;
        return;
    }
    for(int i=0; i<4; i++){
        // 遍历每个方向
        int x = next_x + dir[i][0];
        int y = next_y + dir[i][1];

        // 判断这个方向能不能走 不能走就跳过
        if(x>n || x<1 || y>m || y<1 || barrier[x][y] || vis[x][y]){
            continue;
        }

        // 能走就标记一下这个地方走过了 然后走一下
        vis[x][y] = 1; // 避免自己走回刚刚走过的了
        dfs(x,y);
        vis[x][y] = 0; // 走完记得不留痕 免得其他路径走过相同格子被干扰
    }

}
void solve(){
    int bar_num;
    cin>>n>>m>>bar_num>>start_x>>start_y>>des_x>>des_y;
    while(bar_num--){
        int x,y;
        cin>>x>>y;
        barrier[x][y] = 1;
    }
    // 起点也要标记走过了免得走回起点了
    vis[start_x][start_y] = 1;
    dfs(start_x,start_y);
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