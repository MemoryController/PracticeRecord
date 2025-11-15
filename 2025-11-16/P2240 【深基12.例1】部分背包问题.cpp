#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e3+10;

// 找单位重量价值最高的，依次向下找
int n,t;
int weight[N],value[N];
double price[N],ans=0.0;
void solve(){
    cin>>n>>t;
    for(int i=1; i<=n; i++){
        cin>>weight[i]>>value[i];
        price[i] = (double)value[i]/(double)weight[i];
    }
    for(int i=1; i<=n; i++){
        int max_idx;
        double max_price=0;
        for(int j=1; j<=n; j++){
            // 找最大值
            if(price[j]>max_price){
                max_price = price[j];
                max_idx = j;
            }
        }
        if(t-weight[max_idx]<=0){
            ans += price[max_idx]*t;
            break;
        }else{
            t -= weight[max_idx];
            ans += value[max_idx];
        }
        price[max_idx] = -1;
    }
    printf("%.2f",ans);


}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _=1;
    while(_--){
        solve();
    }
    return 0;
}