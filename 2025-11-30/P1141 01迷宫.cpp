#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

// 从某一点出发找他跟多少个点联通 这个数量就是对应位置的答案
char arr[N][N];
int cnt[N][N],n,m;
bool vis[N][N];
const int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
void bfs(int x,int y){
    queue<pii> q;
    vector<pii> ans;
    q.push({x,y});
    ans.push_back({x,y}); 
    vis[x][y] = 1;

    while (q.size()){
        pii now = q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int nx=now.first+dir[i][0],ny=now.second+dir[i][1];
            // 检验这个点能不能走
            if(nx>=1&&nx<=n && ny>=1&&ny<=n && !vis[nx][ny] && arr[now.first][now.second]!=arr[nx][ny]){
                vis[nx][ny] = 1;
                ans.push_back({nx,ny});
                q.push({nx,ny});
            }

        }
    }
    ll num = ans.size();
    for(const auto & [x,y] : ans){
        cnt[x][y] = num;
    }
}
void solve(){
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>arr[i][j];
        }
    }
    // 用广度优先搜索 BFS
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(!vis[i][j]){
                bfs(i,j);
            }
        }
    }
    
    while(m--){
        int xt,yt;
        cin>>xt>>yt;
        cout<<cnt[xt][yt]<<'\n';
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