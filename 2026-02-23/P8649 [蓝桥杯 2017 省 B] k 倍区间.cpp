#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int n,k,arr[N],pre[N]; // 前缀和的模 计数相同的点然后用组合数求区间个数
ll ans = 0,vis[N];
void solve(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        pre[i] = (pre[i-1]+arr[i]) % k;
    }
    for(int i=0;i<=n;i++){ // 从0开始，避免排除第一个位置
        vis[pre[i]]++;
    }
    for(int i=0;i<k;i++){
        ans += vis[i] * (vis[i]-1) / 2; // 用ll防止溢出
    }
    cout<<ans<<'\n';

    

}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _ = 1;
    // cin>>_;
    while (_--)
    {
        solve();
    }
    return 0;
}