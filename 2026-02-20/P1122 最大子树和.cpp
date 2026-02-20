#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 16000 + 10;
const ll MOD = 1e6+7;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int n,arr[N],dp[N]; // dp: 以i为中心时的最大美丽值
int ans=-2147483647;
vector<int> route[N];
void dfs(int th,int su){ // 当前节点和父节点
    // 最差情况是只有他自己
    dp[th] = arr[th];
    // 遍历子节点，排除父节点
    for(int i=0;i<route[th].size();i++){
        if(route[th][i] != su){
            dfs(route[th][i],th);
            dp[th] = max(dp[th], dp[th]+dp[route[th][i]]);
        }
    }

}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    for(int i=1;i<=n-1;i++){
        int a,b;
        cin>>a>>b;
        // 建立路径关系
        route[a].push_back(b);
        route[b].push_back(a);
    }
    dfs(1,-1);
    for(int i=1;i<=n;i++){
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