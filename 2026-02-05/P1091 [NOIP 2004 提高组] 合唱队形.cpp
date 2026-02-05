#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e6 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int arr[105];
int n,ans=INF;
void solve(){
    cin>>n;
    for(int i=1; i<=n; i++) cin>>arr[i];
    for(int k=1;k<=n;k++){ // 标记轴心
        int cnt=0;
        // 最大单调子序列
        vector<int> dp = vector<int>(n+1,1); // dp:到当前位置为止最大子序列的长度

        for(int i=1; i<=k; i++){ 
            //单增
            for(int j=1;j<i;j++){
                if(arr[i]>arr[j]){
                    dp[i] = max(dp[j]+1,dp[i]);
                }
            }
            
        }
        cnt += dp[k];

        dp = vector<int>(n+1,1);
        for(int i=n;i>=k;i--){
            //单减
            for(int j=n; j>i; j--){
                if(arr[i]>arr[j]){
                    dp[i] = max(dp[j]+1,dp[i]);
                }
            }
        }
        cnt += dp[k];
        cnt--; // 多加了一遍
        ans = min(ans,n-cnt);
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