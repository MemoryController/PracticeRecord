#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

// 合并不影响后续的前缀和
// 将所有不为0的前缀和加起来即可
ll arr[N],pre[N];
int num;
void solve(){
    cin>>num;
    for(int i=1; i<=num; i++){
        cin>>arr[i];
    }
    for(int i=1; i<=num; i++){
        pre[i] = pre[i-1] + arr[i];
    }
    ll ans = 0;
    for(int i=2; i<=num; i++){
        ans += max((ll)0,pre[i]);
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