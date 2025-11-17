#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;

// 二分答案

ll n,k;
ll arr[N];
bool check(ll mid){
    ll pieces = 0;
    for(ll i=1; i<=n; i++){
        pieces += arr[i]/mid;
    }
    return pieces>=k;
}
void solve(){
    cin>>n>>k;
    for(ll i=1; i<=n; i++){
        cin>>arr[i];
    }
    
    ll l=0,r=1e8+1;
    while(r-l!=1){
        ll mid = (r+l)>>1;
        if(check(mid)){
            l = mid;
        }else{
            r = mid;
        }
    }
    cout<<l<<'\n';
    
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _=1;
    while(_--){
        solve();
    }
    return 0;
}