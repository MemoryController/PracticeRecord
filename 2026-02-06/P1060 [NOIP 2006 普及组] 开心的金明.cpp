#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 3e4 + 10;
const ll MOD = 1e6+7;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll n,m,v_arr[30],p_arr[30],dp[30][N];//dp:i种物品 j的钱 得到的最大值
void solve(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>v_arr[i]>>p_arr[i];
    }

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(v_arr[i]>j){
                dp[i][j] = dp[i-1][j];
                continue;
            }
            dp[i][j] = max(dp[i-1][j],dp[i-1][j-v_arr[i]] + v_arr[i]*p_arr[i]);
        }
    }
    cout<<dp[m][n]<<'\n';


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