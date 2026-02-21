#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 6e3 + 10;
const ll MOD = 1e6+7;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll arr[N],dp[N][2]; // dp: 当前位置的最大值 0:不参加 1:参加
int root,n;
bool vis[N]; // 找根
vector<int> route[N]; // 下属列表
ll ans = -INF;
void dfs(int p){
    dp[p][0] = 0;
    dp[p][1] = arr[p];
    for(int i=0; i<route[p].size();i++){
        int t = route[p][i];
        dfs(t);
        dp[p][0] += max(dp[t][1],dp[t][0]); // 在参加和不参加中找最大的
        dp[p][1] += dp[t][0];
    }


}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    for(int i=1;i<n;i++){
        int l,k;
        cin>>l>>k;
        route[k].push_back(l);
        vis[l] = 1;
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]) root = i; // 没做过下属的为根节点
    }

    dfs(root);
    ans = max(dp[root][0],dp[root][1]);
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