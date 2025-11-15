#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f3f3f;
const ll N = 1e5+10;

ll arr1[N],arr2[N];
ll k,n,m;
void solve(){
    cin>>n>>m>>k;
    for(int i=1;i<=n; i++) cin>>arr1[i];
    for(int i=1;i<=m;i++) cin>>arr2[i];
    sort(arr1+1,arr1+n+1);
    sort(arr2+1,arr2+m+1);

    
    
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    while(_--) solve();
    return 0;
}