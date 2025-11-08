#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 0x3f3f3f3f3f3f3f3f;
const int N = 125;

int arr[N][N],n;
ll pre[N][N],ans=-INF;

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>arr[i][j];
        }
    }

    // 容斥定理求二维前缀和
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            pre[i][j] = arr[i][j] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
        }
    }
    // 遍历各个不同尺寸
    for(int a=1; a<=n; a++){
        for(int b=1; b<=n; b++){
            for(int i=1; i<=n-a+1; i++){
                for(int j=1; j<=n-b+1; j++){
                    ans = max(ans,pre[i+a-1][j+b-1] - pre[i-1][j+b-1] - pre[i+a-1][j-1] + pre[i-1][j-1]);
                }
            }

        }
    }
    cout<<ans<<'\n';



    return 0;
}