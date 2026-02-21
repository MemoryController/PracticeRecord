#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 100 + 10;
const ll MOD = 1e6+7;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int n,q,branch[N][N],dp[N][N];// i的子树 j的边数得到的最大值
vector<int> route[N];
void dfs(int p,int su){
    dp[p][0]=0;
    for(int t:route[p]){
        if(t!=su){
            dfs(t,p);
            for(int j=q;j>=1;j--){
                for(int k=1;k<=j;k++){ // 需要允许k==j:允许将所有的名额给一个子节点
                    dp[p][j] = max(dp[p][j],dp[p][j-k]+dp[t][k-1]+branch[p][t]); //注意dp[t][k-1]存在-1:需要给出连接边的位置
                }
            }
        }
    }




}
void solve(){
    cin>>n>>q;
    for(int i=1;i<n;i++){
        int a,b,cnt;
        cin>>a>>b>>cnt;
        branch[a][b] = cnt;
        branch[b][a] = cnt;
        route[a].push_back(b);
        route[b].push_back(a);
    }
    dfs(1,-1);
    cout<<dp[1][q]<<'\n';



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