#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 4e2+10;

int arr[N][N],pre[N][N];

int row,col,ans;

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>row>>col;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){ // 二维前缀和
            pre[i][j] = arr[i][j] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
        }
    }
    ans = min(col,row);
    while(ans--){
        bool ok =0;
        for(int i=1; i<=row-ans+1; i++){
            for(int j=1; j<=col-ans+1; j++){
                int inner_sum = pre[i+ans-1][j+ans-1] - pre[i-1][j+ans-1] - pre[i+ans-1][j-1] + pre[i-1][j-1];
                if(ans*ans==inner_sum) {
                    ok = 1;
                    break;
                }
            }
            if(ok){
                break;
            }
        }
        if(ok){
            break;
        }
    }
    cout<<ans<<'\n';


    
    


    return 0;
}