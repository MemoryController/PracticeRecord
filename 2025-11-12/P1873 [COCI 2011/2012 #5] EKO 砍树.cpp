#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f3f3f;
const int N = 1e6+10;
// 二分

ll n,m;
ll arr[N];
bool check(ll s){
    ll rest = m;
    for(ll i=1; i<=n; i++){
        rest -= max(arr[i]-s,(ll)0);
    }
    return rest<=0;
    
}
void solve(){
    cin>>n>>m;
    ll l=0,r;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        r = max(r,arr[i]);
    }
    r++;
    while(r-l!=1){
        ll mid = (l+r)>>1;
        if(check(mid)) l = mid;
        else r = mid;
    }
    cout<<l<<'\n';

}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin>>_;
    while(_--) solve();
    return 0;
}