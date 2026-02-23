#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 10 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int n,max_dep=1;
ll s_arr[N],b_arr[N],ans = INF;
void dfs(ll s,ll b,int idx,int dep){
    s *= s_arr[idx]; b+=b_arr[idx];
    if(dep==max_dep){
        ans = min(ans,abs(s-b));
        return;
    }
    for(int i=idx+1;i<=n;i++){
        dfs(s,b,i,dep+1);
    }

}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s_arr[i]>>b_arr[i];
    }
    s_arr[0] = 1;
    for(int i=1;i<=n;i++){
        max_dep = i;
        dfs(1,0,0,0);
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