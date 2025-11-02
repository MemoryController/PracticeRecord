#include<bits/stdc++.h>
using namespace std;
long long num,result,now_factor = 3;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>num;
    // 由于质数不能被整除，那就一直用小的因数(不需要判断是不是质数)除他，直到除到为质数为止
    result = num;
    while(result % 2 == 0 && result != 2){
        result >>= 1;
    }

    while(result>=now_factor*now_factor && result != 2){
        if(result % now_factor == 0){
            result /= now_factor;
        }else{
            now_factor += 2;
        }

    }
    cout<<result<<'\n';


    return 0;
}