#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;
typedef pair<ll,ll> pll;

// 反问强度越弱的越在后面
pll msg[N];
ll ans;
int n;
void solve(){
    ans = 0; // 多测记得置零
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>msg[i].second>>msg[i].first; // 等下按照反问排序
    }
    sort(msg+1,msg+1+n,greater());
    for(int i=1; i<=n; i++){
        ans += msg[i].second - (i-1) * msg[i].first;
    }
    cout<<ans<<'\n';

}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _=1;
    cin>>_;
    while(_--){
        solve();
    }
    return 0;
}