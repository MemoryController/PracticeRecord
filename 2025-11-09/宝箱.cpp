#include<bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f3f3f3f3f;
const int N = 4e3+10;
typedef long long ll;

int ans = 0;
int vis[N],pre[N]; // 用一个桶来表示每个价值的有多少个，后面用双指针来扫描即可
int num,lim,max_value;
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    
    cin>>num>>lim;
    for(int i=1; i<=num; i++){
        int value;
        cin>>value;
        vis[value]++;
        max_value = max(max_value,value);
    }
    //做前缀和，减少后面求和时间
    for(int i=1; i<=max_value; i++){
        pre[i] = vis[i] * i + pre[i-1];
    }
    for(int i=1; i<=max_value-lim; i++){
        ans = max(ans,pre[i+lim]-pre[i-1]);
    }
    cout<<ans<<'\n';
    return 0;
}