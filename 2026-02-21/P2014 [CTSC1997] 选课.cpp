#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 300 + 10;
const ll MOD = 1e6+7;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int n,m,arr[N],dp[N][N]; // dp:在i的子树中选j个节点
vector<int> depend[N]; // 由题目可知0为根节点
void dfs(int p){
    dp[p][0] = 0;
    dp[p][1] = arr[p];

    for(int t:depend[p]){
        dfs(t);
        for(int j=m+1;j>=1;j--){ // 背包容量 倒序避免被重复计数(dp[p][j-k]应当使用上一阶段的值) 如果是完全背包就应该是正序
            for(int k=0;k<j;k++){ // 从子节点选的容量
                dp[p][j] = max(dp[p][j],dp[t][k]+dp[p][j-k]);
            }
        }

    }



}
void solve(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int ki;
        cin>>ki>>arr[i];
        depend[ki].push_back(i);
    }
    dfs(0);
    cout<<dp[0][m+1]<<'\n'; // 节点0会消耗



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