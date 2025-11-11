#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 0x3f3f3f3f3f3f3f3f;
const int N = 2e5+10;

ll arr[N],pre[N],n,L;
void solve(){ // 未完成
    cin>>n>>L;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++){
        pre[i] = arr[i]+pre[i-1]; //求前缀和
    }


}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ =1;
    cin>>_;
    while(_--){
        solve();
    }
    return 0;
}