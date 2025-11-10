#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 2e5+10;

ll n,m,a[N],b[N],ans,l,r;
bool check(int s){
    ll rest = m; // 剩余空白牌
    for(ll i=1;i<=n;i++){
        if(s-a[i]>b[i]){
            //超过了单个的边界
            return false;
        }else{
            rest -= max(s-a[i],(ll)0); //补上的算进去
        }
        if(rest<0){
            return false;
        }
    }
    return true;


}

//二分查找ans
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>m;
    
    for(ll i=1; i<=n; i++){
        cin>>a[i];
        l = min (l,a[i]);
       
    }
    for(ll i=1; i<=n; i++){
        cin>>b[i];
        r = max(r,b[i]+a[i]); // 上限确定需要注意
    }
    

    ll mid;
    // 可行的话说明小了或者正好，归左，不可行的话说明大了，归右，最后取l值即可
    while(r - l != 1){
        mid = (l+r) >> 1;
        if(check(mid)){
            l = mid;
        }else{
            r = mid;
        }
    }
    ans = l;
    cout<<ans<<'\n';


    return 0;
}