#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ull arr[N][N],pre[N][N];
void solve(){
    ull ans=0,n,m,q;
    cin>>n>>m>>q;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    // 求二维前缀和
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            pre[i][j] = arr[i][j] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
            // 溢出就相当于自动取模了
        }
    }

    while(q--){
        int u,v,x,y;
        cin>>u>>v>>x>>y;
        ans ^= pre[x][y] - pre[u-1][y] - pre[x][v-1] + pre[u-1][v-1];        
    }
    cout<<ans<<'\n';




}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _ = 1;
    cin>>_;
    while (_--)
    {
        solve();
    }
    return 0;
}