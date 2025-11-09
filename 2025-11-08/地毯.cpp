#include<bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f3f3f3f3f;
const int N = 2e3+10;

int arr[N][N],diff[N][N],length,num;

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>length>>num;
    for(int i=1; i<=num; i++){
        //做二维差分
        int xa,xb,ya,yb;
        cin>>xa>>ya>>xb>>yb;
        diff[xa][ya]++;
        diff[xb+1][ya] --;
        diff[xa][yb+1] --;
        diff[xb+1][yb+1] ++;        
    }
    //前缀和还原数组
    for(int i=1;i<=length;i++){
        for(int j=1;j<=length;j++){
            arr[i][j] = diff[i][j] + arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1];
        }
    }
    //输出
    for(int i=1;i<=length;i++){
        for(int j=1;j<=length;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<'\n';
    }


    return 0;
}