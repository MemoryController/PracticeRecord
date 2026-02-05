#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll dp[N]; // 最大数字为i时的数列数量
void solve(){
    int n;
    cin>>n;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3; i<=n; i++){
        dp[i] = 1; // 单独的自身都有一种
        for(int j=1; j*2<=i; j++){
            dp[i] += dp[j];
        }
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