#include<bits/stdc++.h>
using namespace std;

// 在[1,min(n,m)]中二分找最大边长
typedef long long ll;
const int INF = 0x3f3f3f3f3f3f3f3f;
const int N = 105;

int n,m;
int arr[N][N],pre[N][N];

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>arr[i][j];
        }
    }
    // 做二维前缀和
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            pre[i][j] = arr[i][j] + pre[i][j-1] + pre[i-1][j] - pre[i-1][j-1];
        }
    }
    //在[1,min(n,m)]中二分找最大边长
    // 如果区间中点符合要求则归左， 不符合要求则归右， 最后拿l的值
    int l=1,r=min(m,n),mid;
    while(r - l != 1){
        bool ok = false;
        mid = (l+r) >> 1;
        //以mid作为边长来测试
        for(int i=1; i <= n-mid+1; i++){
            for(int j=1; j <= m-mid+1; j++){
                int s = pre[i+mid-1][j+mid-1] - pre[i-1][j+mid-1] - pre[i+mid-1][j-1] + pre[i-1][j-1];
                if(s == mid*mid){
                    ok = true;
                    break;
                }
            }
            if(ok){
                break;
            }
        }
        if(ok){
            l = mid;
        }else{
            r = mid;
        }
        
    }
    cout<<l<<'\n';





    return 0;
}