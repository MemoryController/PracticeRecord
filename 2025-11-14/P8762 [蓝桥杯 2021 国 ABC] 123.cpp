#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f3f3f;
const int N = 1e5+10;

ll block_sum(ll k){ // 这样公式优化可以避免一个循环 i^2数列求和公式 + 等差数列求和公式
    return k * (k + 1) * (k + 2) / 6;
}
// 用数学公式每一项
ll find_range(ll n){
    //找一下第n号位是在哪个区间
    if (n==1) return 1;
    ll l=0,r=2e9;
    while(r-l!=1){
        ll mid = (l+r) >>1;
        if(mid*(mid+1)/2 < n){
            l = mid;
        }else{
            r = mid;
        }
    }
    return r;

}
ll f(ll n){
    //求n位置上的值是多少
    if (n==1) return 1;
    ll l= find_range(n)-1;
    return n - l*(l+1)/2;
}


void solve(){
    ll num;
    cin>>num;
    while(num--){
        ll l,r,ans=0;
        cin>>l>>r;
        ll l_range = find_range(l);
        ll r_range = find_range(r);
        ll l_num = f(l);
        ll r_num = f(r);
        if(l_range == r_range){
            ans = (l_num + r_num) * (r_num - l_num + 1) / 2;
        }else{
            ans += (l_num + l_range) * (l_range - l_num + 1) / 2;
            ans += (r_num + 1) * r_num / 2;

            if(l_range+1 <= r_range-1){
                ans += block_sum(r_range-1) - block_sum(l_range);
            }
            
            
        }
        cout<<ans<<'\n';
    }

}



int main(){
    int _ = 1;

    while(_--){
        solve();
    }
}
