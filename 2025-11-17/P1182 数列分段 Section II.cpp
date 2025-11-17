#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;

// 二分答案
int n,m;
ll arr[N];
bool check(ll mid){
    // 可以通过分割来达到最大值不超过mid,然后看分割数
    int split_times = 1;
    ll sub_sum = 0;
    for(int i=1; i<=n; i++){
        if(sub_sum + arr[i] <= mid){
            sub_sum += arr[i];
        }else{
            if(arr[i]>mid){
                return 0;
            }
            sub_sum = arr[i];
            split_times++;
        }
    }
    return split_times<=m;

}
void solve(){
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

    ll l=0,r=1e9+1;
    while(r-l!=1){
        ll mid = (r+l)>>1;
        if(check(mid)){
            r = mid;
        }else{
            l = mid;
        }    
    }
    cout<<r<<'\n';

}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _=1;
    while(_--){
        solve();
    }
    return 0;
}