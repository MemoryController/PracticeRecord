#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e4 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;


const int dir[8][2] = {{1,2},{-1,2},{1,-2},{-1,-2},{2,1},{-2,1},{2,-1},{-2,-1}};
ll poi[405][405]; // 某个点最少要走几步
bool vis[405][405]; // 某个点走过没有
int n,m,x_0,y_0;
void solve(){
    cin>>n>>m>>x_0>>y_0;
    // 初始化
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            poi[i][j] = -1;
        }
    }
    poi[x_0][y_0] = 0;
    vis[x_0][y_0] = 1;
    queue<pii> q; // 下一层需要搜索的点
    q.push({x_0,y_0});
    while (q.size()){ // 直到队列里面不再有元素
        pii p = q.front();
        q.pop();
        // 向8个可行方向搜索
        for(int i=0; i<8; i++){
            int x=p.first+dir[i][0],y=p.second+dir[i][1]; // 下一个点
            if(x>=1&&x<=n && y>=1&&y<=m && !vis[x][y]){ // 判断是否出界或者走过了
                vis[x][y] = 1;
                poi[x][y] = poi[p.first][p.second] + 1;
                q.push({x,y});
            }
        }

    }
    // 输出
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<poi[i][j]<<' ';
        }
        cout<<'\n';
    }


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