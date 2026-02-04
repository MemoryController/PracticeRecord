#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;



// 线性DP
ll dp[N];
int n,k;
void solve(){
    cin>>n>>k;
    dp[0] = dp[1] = 1; // 一级台阶和0级台阶都是1种方法
    // 将DP更新到目标n
    for(int i=2; i<=n+1; i++){
        for(int j=1; j<=min(i,k); j++){ // 自底向上求解到达第i级 而不是自上向下
            dp[i] = (dp[i]+dp[i-j]) % 100003;
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