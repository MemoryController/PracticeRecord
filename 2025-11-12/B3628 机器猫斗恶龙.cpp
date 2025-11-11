#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f3f3f;
const int N = 2e5+10;
// 前缀和这一块，找最小值取反

int n,arr[N],pre[N],ans;
void solve(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1] + arr[i];
    }   
    for(int i=1; i<=n; i++){
        ans = min(ans,pre[i]);
    }
    ans = -ans+1;
    cout<<ans<<'\n';


}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin>>_;
    while(_--) solve();
    return 0;
}