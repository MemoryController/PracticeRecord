#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 4e6+10;

int num,batch_days=0;
ll batch_price,ans=INF;
int day[N],money[N];
ll vis[N]; // 下标为天数，数值为花费 桶
ll pre1[N],pre2[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>num>>batch_price;
    for(int i=1; i<=num; i++){
        cin>>money[i]>>day[i];
    }
    for(int i=1; i<=num; i++){
       vis[day[i]] += money[i];
       batch_days = max(batch_days,day[i]); // 求出最大的训练天数
       
    }
    ll max_day = batch_days;
    for(int i=1; i<=batch_days; i++){
        pre1[i] = vis[i] + pre1[i-1];
        pre2[i] = vis[i] * i + pre2[i-1];
    }
    while (batch_days>=0){
        ans = min(ans,batch_days*batch_price+(pre2[max_day]-pre2[batch_days])-(batch_days)*(pre1[max_day]-pre1[batch_days]));
        batch_days--;

    }
    cout<<ans<<'\n';
    



    return 0;
}