#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1500 + 10;
const ll MOD = 1e6+7;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int n,dp[N][2];// dp:从根到i的最少数量 两个相邻节点中至少有一个 0:不放 1:放
vector<int> route[N];
void dfs(int p,int su){
    dp[p][0] = 0;
    dp[p][1] = 1;
    for(int t:route[p]){
        if(t==su) continue;
        dfs(t,p);
        dp[p][0] += dp[t][1];
        dp[p][1] += min(dp[t][1],dp[t][0]); // 如果这个位置有那么放与不放都无所谓
    }

}
void solve(){
    cin>>n;
    for(int i=0;i<n;i++){
        int idx,k;
        cin>>idx>>k;
        while(k--){
            int t;
            cin>>t;
            route[idx].push_back(t);
            route[t].push_back(idx);
        }
    }
    dfs(0,-1);
    int ans = 1;
    ans = min(dp[0][0],dp[0][1]);
    if(n==1){
        ans = 1;
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