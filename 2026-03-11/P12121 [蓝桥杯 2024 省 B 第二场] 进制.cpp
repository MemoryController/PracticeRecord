#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 2e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

const ll num = 8100178706957568;
ll ans;
void solve(){
    for (ll x=11;x<=36;x++){
        ll n = num;
        bool ok = 1;
        while(n>=x){
            if(n%x>=10){
                // 会有字母出现
                ok = 0;
                break;
            }
            n = n/x;

        }
        if(n>=10){
            ok = 0;
        }
        if(ok){
            ans = x;
        }
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