#include<bits/stdc++.h>
using namespace std;
int x,y,years[1000],num;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>x>>y;
    num = 0;
    //直接找四的倍数即可
    int start = 0;
    if(x%4){
        start = x+4-(x%4);
    }else{
        start = x;
    }
    for(int i=start;i<=y;i+=4){
        if(i%400 == 0){
            years[num] = i;
            num++;

        }else if(i%100 != 0){
            years[num] = i;
            num++;
        }
    }
    cout<<num<<'\n';
    for(int i=0;i<num;i++){
        cout<<years[i]<<' ';
    }
    cout<<'\n';
    

    return 0;
}