#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f3f3f;
const int N = 1e5+10;


ll num;
ll fun(ll idx){
    // 获得当前位置的值是多少 题目输入是1-based
    // 二分法找idx落在哪个区间当中 相当于二分法解方程 (2i+1)(i+1)
    // 区间长度是4x+1
    if(idx==1) return 0; //这个没法二分
    
    ll range_idx;
    ll l=0,r=4e9+1;
    while(r-l!=1){
        ll mid = (r+l)>>1;
        if((2*mid+1) * (mid+1) < idx){
            l = mid;
        }else{
            r = mid;
        }
    }
    range_idx = r; // 当前区间的i
    idx -= (2*l+1) * (l+1);
    idx--; //转换成0-based

    // idx 0-based
    if(idx<=range_idx){
        return idx;
    }else if(idx>range_idx && idx<=2*range_idx){
        return 2*range_idx - idx;
    }else if(idx>2*range_idx && idx<=3*range_idx){
        return -idx + 2*range_idx;
    }else{
        return idx - 4*range_idx;
    }

}
void solve(){
    cin>>num;
    while(num--){
        ll idx;
        cin>>idx;
        cout<<fun(idx)<<'\n';
    }



}



int main(){
    int _ = 1;

    while(_--){
        solve();
    }
}
