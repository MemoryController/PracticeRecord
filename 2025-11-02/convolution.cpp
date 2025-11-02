#include<bits/stdc++.h>
using namespace std;

int num;
long long prefix_sum[200000],sum=0,tmp,result=0;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>num;
    // 先求前缀和
    for(int i=0;i<num;i++){
        cin>>tmp;
        sum += tmp;
        prefix_sum[i] = sum;
    }
    // 再卷积
    for(int i=0;i<num-1;i++){
        if(i==0){
            result += (prefix_sum[0]) * (prefix_sum[num-1]-prefix_sum[i]);
        }else{
            result += (prefix_sum[i]-prefix_sum[i-1]) * (prefix_sum[num-1]-prefix_sum[i]);
        }
    }
    cout<<result<<'\n';

    return 0;
}