#include<iostream>
using namespace std;
int sequence[100],num,lenth; //整个序列
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>num;
    lenth = 1;
    sequence[0] = num;

    while (num!=1){
        //只要num不是1就一直循环下去
        if(num%2==1){
            //奇数
            num = num*3+1;
            
        }else{
            //偶数
            num = num/2;
        }
        sequence[lenth]=num;
        lenth++;
    }
    for(int i=lenth-1;i>=0;i--){
        cout<<sequence[i]<<' ';
    }
    cout<<'\n';
    return 0;

}