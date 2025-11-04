#include<bits/stdc++.h>
using namespace std;

int row,col,cap,arr[1005][1005];
long long prefix_sum[1005][1005];
long long ans = -0x3f3f3f3f3f3f3f3f;
int x=0,y=0;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin>>row>>col>>cap;
    //二维前缀和
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cin>>arr[i][j];
            prefix_sum[i][j] = arr[i][j] + prefix_sum[i][j-1] + prefix_sum[i-1][j] - prefix_sum[i-1][j-1];
        }
    }
    for(int i=1; i<=row-cap+1; i++){
        for(int j=1; j<=col-cap+1; j++){
            // i,j 是首都左上角位置
            
            if(ans<prefix_sum[i+cap-1][j+cap-1]-prefix_sum[i-1][j+cap-1]-prefix_sum[i+cap-1][j-1]+prefix_sum[i-1][j-1]){
                ans = prefix_sum[i+cap-1][j+cap-1]-prefix_sum[i-1][j+cap-1]-prefix_sum[i+cap-1][j-1]+prefix_sum[i-1][j-1];
                x=i;y=j;
            }
        }
    }
    cout<<x<<' '<<y<<'\n';




    return 0;
}