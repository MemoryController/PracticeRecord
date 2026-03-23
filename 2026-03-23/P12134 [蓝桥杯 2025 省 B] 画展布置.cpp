#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 1000000007;
const int N = 1e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll arr[N],n,m,arr2[N];
ll pre[N];
ll ans=INF;
void solve(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    // sort
    sort(arr+1,arr+n+1);
    for(int i=1;i<=n;i++){
        arr2[i] = arr[i] * arr[i];
    }
    // for(int i=1;i<=n;i++){
    //     pre[i] = pre[i-1] + arr[i];
    // }
    for(int i=1;i<=n-m+1;i++){
        ans = min(ans,arr2[i+m-1]-arr2[i]);
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