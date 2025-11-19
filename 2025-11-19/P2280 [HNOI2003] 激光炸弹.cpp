#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

// 二维前缀和
ll arr[N][N],pre[N][N];
void solve(){
    int n,m,x_limit=0,y_limit=0;
    ll ans=0;
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        int x,y,v;
        cin>>x>>y>>v;
        x++;y++; // 转换成 1,1 为原点
        arr[x][y] += v;
        x_limit = max(x_limit,x);
        y_limit = max(y_limit,y);
    }
    for(int i=1; i<=x_limit; i++){
        for(int j=1;j<=y_limit; j++){
            pre[i][j] = arr[i][j] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
        }
    }
    if(m>=x_limit && m>=y_limit){
        ans = pre[x_limit][y_limit];
    }else if (m>=x_limit){
        for(int i=m; i<=y_limit; i++){
            ans = max(ans,(ll)pre[x_limit][i]-pre[x_limit][i-m]);
        }
    }else if (m>=y_limit){
        for(int i=m; i<=x_limit; i++){
            ans = max(ans,(ll)pre[i][y_limit]-pre[i-m][y_limit]);
        }
    }else{
        for(int i=m; i<=x_limit; i++){
            for(int j=m; j<=y_limit; j++){
                ans = max(ans, (ll)pre[i][j]-pre[i-m][j]-pre[i][j-m]+pre[i-m][j-m]);
            }
        }
    }
    
    cout<<ans<<'\n';
    
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _ = 1;
    while (_--)
    {
        solve();
    }
    return 0;
}