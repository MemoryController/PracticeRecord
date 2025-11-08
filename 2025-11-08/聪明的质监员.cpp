#include<bits/stdc++.h>
using namespace std;

const long long INF = 0x3f3f3f3f3f3f3f3f3f3f3f3f;
const int N = 4e5+10;
typedef long long ll;

ll n,m,period[2][N],last_ans=INF;
ll pre1[N],pre2[N],ans=INF,s,arr[2][N],max_weight=0,min_weight=INF; //条件前缀和 一个是重量，另一个是价格
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    
    cin>>n>>m>>s;
    for(ll i=1; i<=n; i++){
        cin>>arr[0][i]>>arr[1][i];
        max_weight = max(max_weight,arr[0][i]);
        min_weight = min(min_weight,arr[0][i]);
    }
    for(ll i=0; i<m; i++){
        cin>>period[0][i]>>period[1][i];
    }
    for(ll w=min_weight; w<=max_weight; w++){//写一个大的循环试w
        //求合格部分的前缀和
        ll y = 0;//当前轮的测量值
        for(ll i=1; i<=n; i++){
            if(arr[0][i] >= w){
                pre1[i] = pre1[i-1] + 1;
                pre2[i] = pre2[i-1] + arr[1][i];
            }else{
                pre1[i] = pre1[i-1];
                pre2[i] = pre2[i-1];
            }
        }
        for(ll i=0; i<m; i++){
            y += (pre1[period[1][i]] - pre1[period[0][i]-1]) * (pre2[period[1][i]] - pre2[period[0][i]-1]);
        }
        // 出现拐点就可以退出了
        ans = min(ans,abs(s-y));


    }
    cout<<ans<<'\n';


    return 0;
}