#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e3 + 10;
const ll MOD = 1e6+7;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int t,m,t_arr[105],m_arr[105],dp[105][1005]; // dp: i种 j时间内最大价值
void solve(){
    cin>>t>>m;
    for(int i=1;i<=m;i++){
        cin>>t_arr[i]>>m_arr[i];
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=t;j++){
            if(t_arr[i]>j){ // 时间不够
                dp[i][j] = dp[i-1][j];
                continue;
            }
            dp[i][j] = max(dp[i-1][j-t_arr[i]]+m_arr[i],dp[i-1][j]);
        }
    }
    cout<<dp[m][t]<<'\n';




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