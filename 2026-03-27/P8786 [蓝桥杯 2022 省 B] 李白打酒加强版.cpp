#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 1e9+7;
const int N = 5e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;


int n,m,dn=0,dm=0;
ll ans=0;
void dfs(int dep,ll cnt,bool op,int n,int m){
    
    if(op){
        cnt *= 2;
    }else{
        cnt--;
    }
    
    if(cnt<0) return;
    if(dep==n+m){
        if(cnt==0 && !op){
            ans++;
            ans %= MOD;
        }
        return;
    }
    if(dm==m) return;
    if(dn==n && cnt<m-dm) return;
    if(n>dn){
        dn++;
        dfs(dep+1,cnt,1,n,m);
        dn--;
    }
    if(m>dm){
        dm++;
        dfs(dep+1,cnt,0,n,m);
        dm--;
    }
    
    
    
}
void solve(){
    int n,m;
    cin>>n>>m;
    dn++;dfs(1,2,1,n,m);dn--;
    
    dm++;dfs(1,2,0,n,m);dm--;
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