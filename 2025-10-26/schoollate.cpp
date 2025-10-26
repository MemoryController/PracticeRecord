#include<bits/stdc++.h>
using namespace std;
int s,v,hour,minute,total_time_minute;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>s>>v;
    // 设置时间
    hour = 8;
    minute = 0;


    total_time_minute = 10 + ceil((double)s/(double)v);

    if (total_time_minute>=60){
        hour -= (int)(total_time_minute/60);
        total_time_minute -= 60*(int)(total_time_minute/60);
    }
    if (total_time_minute>0){
        hour -= 1; // 退一位
        minute = 60-total_time_minute;
    }
    while(hour<0){ // 不是说好不能多一天的吗？是我语文不好了
        hour += 24;
    }

    printf("%02d:%02d\n",hour,minute);

    return 0;
}