#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 0x3f3f3f3f3f3f3f3f;
const ll N = 1e3+10;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

int vis[N],diff_vis[N];//vis代表每个时间点需要的桶数量

int n,ans=0,max_time;
void solve(){
    cin>>n;
    while(n--){
        int l,r,b;
        cin>>l>>r>>b;
        diff_vis[r+1] -= b;
        diff_vis[l] += b;
        max_time = max(r,max_time);
    }
    for(int i=1; i<=max_time; i++){
        vis[i] = diff_vis[i] + vis[i-1];
    }
    for(int i=1; i<=max_time; i++){
        ans = max(ans,vis[i]);
    }
    cout<<ans<<'\n';    
    
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    while(_--) solve();
    return 0;
}