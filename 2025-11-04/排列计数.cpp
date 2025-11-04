#include<bits/stdc++.h>
using namespace std;

int num,prefix[(int)2e5+10];
long long ans,cnt;
const long long MOD = 998244353;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a;
    cin>>a;
    while (a--){
        ans = 1;
        cin>>num;
        bool ok = true;
        for(int i=1; i<=num; i++){
            cin>>prefix[i];
            if(i>=2 && prefix[i]>prefix[i-1]){
                ok =0;
            }
        }
        if(prefix[num] != 1 || prefix[1]>num){
            // 不然就错了
            ok = 0;
        }
        if(ok){
            cnt = num - prefix[1]; // 剩多少数字可以选
            for(int i=2; i<=num; i++){
                if(prefix[i] == prefix[i-1]){
                    ans = ans * cnt % MOD; // 遍历过去就相当于求排列数了
                    cnt--;
                }else{
                    cnt = cnt + prefix[i-1] - prefix[i] -1; //第一段小区间剩下的数字名额 加上 下一段小区间多的数字名额
                }

            }
            cout<<ans<<'\n';


        }else{
            cout<<"0\n";
        }
    }
    


    return 0;
}