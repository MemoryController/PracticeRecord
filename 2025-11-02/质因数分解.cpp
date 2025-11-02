#include<bits/stdc++.h>
using namespace std;
long long num,result=0,now_factor = 3;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>num;
    for(long long i = 2; i*i<=num; i++){
        if(num % i == 0){
            result = num/i;
        }
    }
    cout<<result<<'\n';


    return 0;
}