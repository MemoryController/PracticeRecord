#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 2e5+10;
// 对最短跳跃距离二分答案

ll len,n,m,arr[N];
bool check(ll mid){
    // 要求在减少量小于m的情况下保证两个之间的值大于mid
    ll times=0,rest_distance=0; // 移走个数
    for(ll i=1; i<=n+1; i++){
        rest_distance += arr[i] - arr[i-1];
        if(rest_distance>=mid){
            rest_distance = 0;
        }else{
            times++;
        }
    }
    return times <= m;
}
void solve(){
    cin>>len>>n>>m;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    arr[n+1] = len; // 终点之前那一小段需要被考虑
    ll l=1,r=len+1; // 尝试区间放大一点，免得len没机会轮到
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
    int _ = 1;
    //cin>>_;
    while(_--) solve();
    return 0;
}