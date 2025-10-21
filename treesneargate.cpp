#include<bits/stdc++.h>
using namespace std;
int length,num,sequence[100000],result,regions[200];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    //读数据
    cin>>length>>num;
    for(int i=0;i<num*2;i++){
        cin>>regions[i];
    }
    //初始化街道
    for(int i=0;i<=length;i++){
        sequence[i] = 1;
    }
    // 按照输入数据来拔掉树木
    for(int i=0;i<num;i++){
        for(int j=regions[i*2];j<=regions[i*2+1];j++){
            sequence[j] = 0;
        }
    }
    // 数一下剩下的
    for(int i=0;i<=length;i++){
        result += sequence[i];
    }
    cout<<result<<'\n';
    return 0;
}