#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

const int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
int n,ans=0;
char arr[N][N];
bool vis[N][N];
void bfs(int a,int b){
    queue<pii> q;
    q.push({a,b});

    bool ok = 1; // 会被淹
    while(q.size()){
        auto [x,y] = q.front();
        q.pop();
        
        int water_cnt = 0;
        for(int i=0; i<4 ;i++){
            int nx=x+dir[i][0], ny=y+dir[i][1];
            if(!vis[nx][ny] && arr[nx][ny]=='.'){
                water_cnt++;
            }else if(!vis[nx][ny] && arr[nx][ny]=='#'){
                q.push({nx,ny});
                vis[nx][ny] = 1;
            }
        }
        if(water_cnt==0){
            ok = 0;
        }
    }
    ans += ok;
    
}

void solve(){
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=2; i<=n-1; i++){
        for(int j=2; j<=n-1; j++){
            if(arr[i][j]=='#' && !vis[i][j]){
                // 这是一个新的岛
                bfs(i,j);
            }

        }
    }
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