#include<bits/stdc++.h>
using namespace std;
int total;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>total;
    for(int i=0;i<total;i++){
        // [0,n-1]
        for(int j=0;j<=i;j++){
            //通过组合数计算   C ij
            unsigned long long up=1;
            unsigned long long down = 1; //分子分母
            for(int k=i;k>j;k--){
                up *= k;
            }
            for (int k=1;k<=i-j;k++){
                down *= k;
            }
            cout<<(long long)(up/down)<<' ';
        }
        cout<<'\n';
    }


    return 0;
}