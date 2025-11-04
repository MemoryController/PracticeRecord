#include<bits/stdc++.h>
using namespace std;

int cycle,arr[(int)2e5+10],length;
int prefix[(int)2e5+10];
int ans=0;
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> cycle;
    for (int a=0; a<cycle; a++){
        // 读入数据 求前缀和
        ans = 0;
        cin>>length;
        prefix[0] = 0;
        for(int i=1; i<=length; i++){
            cin>>arr[i];
            prefix[i] = max(arr[i],prefix[i-1]); // 如果max成了prefix[i-1] 则说明有逆序，并且i-1位置就是逆序的那个
            // 当成一个递增的传递
        }

        // 再逐个用prefix里面的加上arr里面的，就是一个逆序和
        for(int i=1; i<=length; i++){

            if(prefix[i] != arr[i]){
                //说明是prefix和原数据逆序
                ans = max(ans,prefix[i]+arr[i]);
            }
        }
        cout<<ans<<'\n';

    }




    return 0;
}