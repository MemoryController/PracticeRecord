#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 0x3f3f3f3f3f3f3f3f;
const int N = 2e5+10;
const double err = 1e-5; //误差，二分的停止条件

ll arr[N],n,L; 
double pre[N],premin[N];
bool check(double s){
    //是否存在一个子数组可以>=s
    for(int i=1; i<=n; i++){
        pre[i] = (double)arr[i]+pre[i-1] - s; //求前缀和 arr[i] - s
        // 做个-s可以在后续直接把区间和和0比较来判断是否大于s,而不需要知道这个子区间长度
    }
    // 维护一个前缀和的最小值，那样每个位置直接用当前前缀和减去L个之前的位置前缀和最小值就能得到长度大于等于L的区间和
    for(int i=1; i<=n; i++){
        premin[i] = min(premin[i-1],pre[i]);
    }
    for(int i=L;i<=n;i++){
        if(pre[i] - premin[i-L] >= 0){
            return true;
        }
    }
    return false;



}
void solve(){ // 未完成
    cin>>n>>L;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    double l=-1e4,r=1e4,mid;
    while(r-l>=err){
        mid = (l+r)/2;
        if(check(mid)){
            l = mid; // 如果能行就是小了或者正好
        }else{
            r = mid;
        }
    }
    printf("%.5f\n",l);


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