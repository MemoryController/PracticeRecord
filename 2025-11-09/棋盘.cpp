#include<bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f3f3f3f3f;
const int N = 2e3+10;

int arr[N][N],diff[N][N];
int filed_size,num;
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    
    cin>>filed_size>>num;

    for(int i=1; i<=num; i++){ // 利用差分对区域整体处理
        int xa,xb,ya,yb;
        cin>>xa>>ya>>xb>>yb;
        diff[xa][ya] ^= 1;
        diff[xb+1][ya] ^= 1;
        diff[xa][yb+1] ^= 1;
        diff[xb+1][yb+1] ^= 1;
    }
    for(int i=1; i<=filed_size; i++){ //还原数组
        for(int j=1; j<=filed_size; j++){
            arr[i][j] = diff[i][j] ^ arr[i-1][j] ^ arr[i][j-1] ^ arr[i-1][j-1];
        }
    }    
    for(int i=1; i<=filed_size; i++){
        for(int j=1; j<=filed_size; j++){
            cout<<arr[i][j];
        }
        cout<<'\n';
    }
    
    return 0;
}