#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 2e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

void solve(){
    int ans = 0;
    int n;cin>>n;
    // 坐编号大于等于位次的
    for(int i=1;i<=n;i++){
        int j;
        cin>>j;
        if(j<=i) ans++;
    }
    cout<<ans<<'\n';
    



}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _ = 1;
    cin>>_;
    while (_--)
    {
        solve();
    }
    return 0;
}