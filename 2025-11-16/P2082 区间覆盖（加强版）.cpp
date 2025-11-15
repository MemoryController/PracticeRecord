#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;
typedef pair<ll,ll> pll;

int n;
pll ranges[N];
ll ans=0;
void solve(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>ranges[i].first>>ranges[i].second;
    }
    // 按照开头进行排序
    sort(ranges+1,ranges+1+n);
    ll l=-1,r=-2;
    for(int i=1; i<=n; i++){
        if(ranges[i].first>r){
            // 需要更新区间
            ans += r-l+1;
            l = ranges[i].first;
            r = ranges[i].second;
        }else if(ranges[i].second>r){
            // 扩充区间
            r = ranges[i].second;
        }
    }
    ans += r-l+1;
    cout<<ans<<'\n';


}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _=1;
    while(_--){
        solve();
    }
    return 0;
}