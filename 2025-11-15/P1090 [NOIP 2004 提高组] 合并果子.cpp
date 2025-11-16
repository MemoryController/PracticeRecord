#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e4+10;

ll arr[N],ans=0;
int num;
// 每次迭代都去找最小的两个相加
void solve(){
    cin>>num;
    for(int i=1; i<=num; i++){
        cin>>arr[i];
    }
    for(int i=1; i<=num-1; i++){
        sort(arr+1,arr+1+num);
        ans += arr[i] + arr[i+1];
        arr[i+1] += arr[i];
        arr[i] = 0;
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