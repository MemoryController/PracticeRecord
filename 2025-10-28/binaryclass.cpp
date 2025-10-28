#include<bits/stdc++.h>
using namespace std;

bool isA(int x){
    // 这个数是A类吗
    int count1=0,count0=0;
    while(x){
        //x不是0就继续
        if(x%2){
            // 最后一位是1
            count1++;
        }else{
            count0++;
        }
        x = (int)(x/2);
    }
    if(count1>count0){
        return true;
    }else{
        return false;
    }

}

int limit,countA=0,countB=0;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>limit;
    for(int i=1; i<=limit; i++){
        if(isA(i)){
            countA++;
        }else{
            countB++;
        }
    }
    cout<<countA<<' '<<countB<<'\n';



    return 0;
}