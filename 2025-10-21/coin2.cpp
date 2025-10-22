#include<bits/stdc++.h>
using namespace std;
/**
 * A better solution!
 */
int days,now_price,total;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    now_price = 1;
    total = 0;
    cin>>days;
    while((days-now_price)>=0){
        total += now_price*now_price; // 对应天数乘以价格
        days -= now_price; //相当于迭代对应天数
        now_price ++; // 涨价
    }
    total += now_price*days; // 剩下的天数
    cout<<total<<'\n';

    return 0;
}