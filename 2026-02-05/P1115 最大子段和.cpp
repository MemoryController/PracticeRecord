#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 2e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll dp[N],n,arr[N];
// 最大字段和的DP做法
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    dp[0] = -INF;
    for(int i=1;i<=n;i++){
        dp[i] = max(dp[i-1]+arr[i],arr[i]);
    }
    // 输出dp中的最大值
    ll ans = -INF;
    for(int i=1; i<=n;i++){
        ans = max(ans,dp[i]);
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