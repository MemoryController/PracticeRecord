#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f3f3f;
const ll N = 1e5+10;

ll arr[N],pre[N],num,m;

void solve(){
    cin>>num;
    for(ll i=1;i<=num;i++){
        cin>>arr[i];
    }

    for(ll i=1;i<=num;i++){
        pre[i] = pre[i-1]+arr[i];
    }

    cin>>m;
    while(m--){
        ll l,r;
        cin>>l>>r;
        cout<<pre[r]-pre[l-1]<<'\n';
    }    
    
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    while(_--) solve();
    return 0;
}