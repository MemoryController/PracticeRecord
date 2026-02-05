#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e4 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll n,w,arr[N];
ll dp[N]; // 凑出i需要最少多少张
void solve(){
    cin>>n>>w;
    for(ll i=1;i<=n;i++){
        cin>>arr[i];
    }
    dp[0] = 0;
    for(ll j=1; j<=w; j++){
        ll min_cnt = INF;
        for(ll i=1; i<=n;i++){
            if(j-arr[i]<0) continue;
            min_cnt = min(dp[j-arr[i]],min_cnt);
        }
        dp[j] = min_cnt + 1;
    }
    cout<<dp[w]<<'\n';


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