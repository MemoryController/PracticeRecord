#include<bits/stdc++.h>
using namespace std;
int days,next_change,change_times,now_price,total;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>days;
    next_change = 1;
    change_times =0;
    now_price = 1;
    total = 0;
    for(int i=0;i<days;i++){
        total += now_price;
        next_change--;
        if(!next_change){
            // 为0时就需要改变
            now_price++;
            next_change = now_price;
        }
        
    }
    cout<<total<<'\n';
    

    return 0;

}