#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 20 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll dp[N][N][N];
ll f(ll a,ll b,ll c){
    if(a<=0 || b<=0 || c<=0) return 1;
    if(a>20 || b>20 || c>20) return f(20,20,20);
    if(dp[a][b][c] != 0) return dp[a][b][c];
    if(a<b && b<c){
        dp[a][b][c] = f(a,b,c-1) + f(a,b-1,c-1) - f(a,b-1,c);
        return dp[a][b][c];
    }
    dp[a][b][c] = f(a-1,b,c) + f(a-1,b-1,c) + f(a-1,b,c-1) - f(a-1,b-1,c-1);
    return dp[a][b][c];

}
void solve(){
    while(1){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==-1 && b==-1 && c==-1) break;
        // long long 不是%d 而是%lld
        printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,f(a,b,c));
    }
    

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