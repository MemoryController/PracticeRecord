#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int n,arr[N],dp[N]; // dp是[0,i]范围内能组建的最长长度
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        dp[i] = 1;
    }
    for(int i=2;i<=n;i++){
        int max_idx = -1,max_value=0;
        for(int j=1;j<i;j++){
            if(arr[j]<arr[i]){
                dp[i] = max(dp[j]+1,dp[i]);
            }
        }
    }
    int ans = 0;
    for (int i=1; i<=n; i++){
        ans = max(dp[i],ans);
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