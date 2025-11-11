#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f3f3f;
const int N = 2e5+10;
//依旧二分查找
ll arr[N],ans=0;
int n,c,r,l;
void solve(){
    cin>>n>>c;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    for(int i=n; i>=1; i--){
        ll target = arr[i] - c; //去查找b的位置
        r = upper_bound(arr+1,arr+i,target) -arr;
        l = lower_bound(arr+1, arr+i, target) -arr;
        ans += r-l;
    }
    cout<<ans<<'\n';

}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin>>_;
    while(_--) solve();
    return 0;
}