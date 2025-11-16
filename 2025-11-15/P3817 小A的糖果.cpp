#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;

// 从前向后遍历 优先减少后一位
int num,x;
ll arr[N],ans=0;
void solve(){
    cin>>num>>x;
    for(int i=1; i<=num; i++){
        cin>>arr[i];
    }

    for(int i=1; i<=num-1; i++){
        ll diff = max(0ll,arr[i+1]+arr[i]-x);
        ans += diff;
        if(diff<=arr[i+1]){
            arr[i+1] -= diff;
        }else{
            diff -= arr[i+1];
            arr[i+1] = 0;
            arr[i] -= diff;
        }
    }
    cout<<ans<<'\n';


}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ =1;
    while(_--){
        solve();
    }
    return 0;
}