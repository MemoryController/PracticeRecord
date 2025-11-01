#include<bits/stdc++.h>
using namespace std;
// 菲波拉契数列
long long num,arr[50];
long long cal(int n){
    // 输出第n位
    if(n == 1 || n == 2){
        return 1;
    }else if (n==0){
        return 0;
    }else{
        arr[0] = 1;
        arr[1] = 1;
        for(int i=2; i<n; i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n-1];
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>num;
    printf("%.2f\n", (double)cal(num));

    return 0;
}