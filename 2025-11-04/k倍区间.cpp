#include<bits/stdc++.h>
using namespace std;

long long k,n,tmp,vis[(int)2e5+10]; // 前n项和的取余 找相同的点可以凑成区间 用个桶来加速查询
long long sum_num = 0, ans=0;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    cin>>n>>k;
    for(long long i=0;i<k;i++) vis[i] = 0; // 初始化
    vis[0] = 1; // 没有数字的时候肯定有一个模为0
    for(long long i=1; i<=n; i++){
        cin>>tmp;
        sum_num += tmp;
        vis[sum_num % k]++;
    }
    for(long long i=0;i<k;i++){
        ans += vis[i]*(vis[i]-1) / 2;
    }

    cout<<ans<<'\n';

    return 0;
}