#include<bits/stdc++.h>
using namespace std;
long long vis[(int)1e5 + 10];
long long arr[(int)1e5 + 10];
int num;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>num;
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    for(int i =0;i<num; i++){
        vis[arr[i]] = 1; // 相当于数组的逆映射 因为数字没有重复出现
    }
    long long ans =0;
    for(int i=0; i<num;i++){
        bool ok = 0;
        for(int j=0; j<num; j++){
            if(arr[i] - arr[j]>0 && vis[arr[i] - arr[j]] && arr[i] != 2*arr[j]){
                ok = 1;
            }
        }
        ans += ok;

    }
    

    cout<<ans<<'\n';



    return 0;
}