#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e6 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll dp[N]; // 恰好多少次操作得到i个字
ll n;
void solve(){
    cin>>n;
    dp[1]=0;
    for(int i=2; i<=n; i++){
        if(i%2){// 奇数就不能是2x变来的
            dp[i] = dp[i-1] + 1;
            continue;
        }
        dp[i] = min(dp[i/2],dp[i-1]) + 1;
    }
    cout<<dp[n]<<'\n';

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