#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 2e5+10;
// 依旧二分 不想弄了 超时一个 不想改二分了

ull num;
void solve(){
    cin>>num;
    ull l=1,r=num>>1;
    //二分查找
    while(r-l!=1){
        ull mid = (r+l)>>1;
        if(mid*mid*mid<=num){
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