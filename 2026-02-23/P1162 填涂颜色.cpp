#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 30 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;


int op[4][2] = {
    {1,0},{-1,0},{0,1},{0,-1}
};
int arr[N][N],n;
bool vis[N][N]; // 标记外侧的0,剩下的全是内侧的0

void bfs(int x_0,int y_0){
    queue<pii> q;
    q.push({x_0,y_0});
    while(!q.empty()){
        auto [x,y] = q.front();
        vis[x][y] = 1;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+op[i][0],ny=y+op[i][1];
            if(nx>0 && nx<=n && ny>0 && ny<=n && !vis[nx][ny] && arr[nx][ny]==0){
                q.push({nx,ny});
            }
        }
    }
}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    // 溜着边搜
    for(int i=1;i<=n;i++){
        if(arr[i][1]==0 && !vis[i][1]){
            bfs(i,1);
        }
        if(arr[1][i]==0 && !vis[1][i]){
            bfs(1,i);
        }
        if(arr[i][n]==0 && !vis[i][n]){
            bfs(i,n);
        }
        if(arr[n][i]==0 && !vis[n][i]){
            bfs(n,i);
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(arr[i][j]==0 && !vis[i][j]){
                cout<<"2 ";
            }else{
                cout<<arr[i][j]<<' ';
            }
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