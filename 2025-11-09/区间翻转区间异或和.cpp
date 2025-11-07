#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 0x3f3f3f3f3f3f3f3f;
const int N = 4e5+10;

ll arr[N],pre_max=-INF,vis[(int)2e6+10];
ll num,ans=0;
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    cin>>num;
    for(ll i=1; i<=num; i++){
        cin>>arr[i];
    }
    //求异或和
    for(ll i=1; i<=num; i++){
        // 和0异或就是自己，不需要特殊处理
        arr[i] ^= arr[i-1];
    }
    //对每个位置进行计数包括0号位置
    for(ll i=0; i<=num; i++){
        vis[arr[i]]++;
        pre_max = max(arr[i],pre_max);
    }
    // 翻转不影响之前和之后的内容（翻转部分异或为0），中间的内容每个数字出现的频数不变，顺序可能改变
    // 组合数 两个相同的前缀异或代表夹在他们中间的是一个灵异区间
    for(ll i=0; i<=pre_max; i++){
        ans += vis[i]*(vis[i]-1)/2;
    }
    cout<<ans<<'\n';
    


    return 0;
}