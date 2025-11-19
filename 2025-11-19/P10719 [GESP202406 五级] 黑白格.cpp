#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e2 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

// 不能二分，因为某些情况下指定格子数是质数等情况 不能变出合适的矩形将他足够的黑点框住
int arr[N][N],pre[N][N];
int n,m,k;
bool check(int mid){
    // 判定制定格子大小能否包含k个黑色
    if(mid > m*n) return 0;
    for(int x=1; x<=min(n,mid); x++){
        if(mid%x) continue; // 不能整除就跳过
        int y = mid / x;
        // cout<<'x'<<x<<'y'<<y<<'\n';
        for(int i=x; i<=n; i++){
            for(int j=y; j<=m; j++){
                if(pre[i][j]-pre[i-x][j]-pre[i][j-y]+pre[i-x][j-y] >= k){
                    return 1;
                }
            }
        }
    }
    return 0;

}
void solve(){
    
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        string tmp;
        cin>>tmp;
        for(int j=1;j<=m;j++){
            arr[i][j] = tmp[j-1]-'0';
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            pre[i][j] = arr[i][j] + pre[i][j-1] + pre[i-1][j] - pre[i-1][j-1];
        }
    }
    int ans=0;
    for(int i=1;i<=n*m;i++){
        if(check(i)){
            ans = i;
            break;
        }
    }
    cout<<ans<<'\n';

}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _ = 1;
    while (_--)
    {
        solve();
    }
    return 0;
}