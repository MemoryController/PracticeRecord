#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 4e6+10;

ll arr[N],diff[N],num,h,pre[N]; // arr每个元素代表一行的个数
ll ans = INF;
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>num>>h;

    ll up,down;
    for(ll i=1;i<=num;i++){ // 在差分数组中记录哪些位置发生改变
        cin>>down>>up;
        down++;up++;
        diff[down]--; //下界
        diff[up+1]++; //上界
    }
    //还原数组
    arr[0] = num;
    for(ll i=1; i<=num; i++){
        arr[i] = arr[i-1] + diff[i];
    }
    //求前缀和
    for(ll i=1; i<=num; i++){
        pre[i] = pre[i-1] + arr[i];
    }
    // 通过前缀和找临近的h组
    for(ll i=h; i<=num; i++){
        ans = min(ans,pre[i]-pre[i-h]);
    }
    cout<<ans<<'\n';

    return 0;
}