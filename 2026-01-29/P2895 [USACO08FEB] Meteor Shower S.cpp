#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int op[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int field[305][305],dis[305][305]; 
bool ok = 0;

void solve(){
    int n;
    cin>>n;
    // 初始化数组为-1
    for(int i=0; i<305; i++){
        for(int j=0; j<305; j++){
            dis[i][j] = -1;
            field[i][j] = -1;
        }
    }
    while(n--){ 
        // 标记危险地带
        int x,y,t;
        cin>>x>>y>>t;
        if(field[x][y] == -1){
            field[x][y] = t;
        }else{
            field[x][y] = min(t,field[x][y]);
        }
        for(int i=0;i<4;i++){
            int n_x=x+op[i][0],n_y=y+op[i][1];
            if(n_x<0 || n_y<0) continue;
            // 需要比较，去更早值
            if(field[n_x][n_y] == -1){
                field[n_x][n_y] = t;
            }else{
                field[n_x][n_y] = min(t,field[n_x][n_y]);
            }

        }
    }

    queue<pii> q;
    pii origin;origin.first=0;origin.second=0;
    q.push(origin);
    dis[0][0] = 0;
    // 起点特判
    if(field[0][0] == 0){
        // 炸死在起点
        q.pop();
        ok = 0;
    }
    while(!q.empty()){
        // 进行BFS
        auto [x,y] = q.front();q.pop();
        if(field[x][y]==-1){
            cout<<dis[x][y]<<'\n';
            ok = 1;
            break;
        }
        for(int i=0; i<4; i++){
            int n_x=op[i][0]+x,n_y=op[i][1]+y;
            if(n_x<0 || n_y<0 || (dis[x][y]+1 >= field[n_x][n_y] && field[n_x][n_y] != -1) || dis[n_x][n_y] != -1) continue;
            dis[n_x][n_y] = dis[x][y] + 1;
            pii n;n.first=n_x;n.second=n_y;
            q.push(n);
        }

    }
    if(!ok){
        cout<<"-1\n";
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