#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 2e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int n;
ll maxmium=INF,minimum=0;
void solve(){
    cin>>n;
    while(n--){
        ll a,b;
        cin>>a>>b;
        maxmium = min((ll)(a/b),maxmium);
        minimum = max((ll)(a/(b+1)+1),minimum);
    }
    cout<<minimum<<' '<<maxmium<<'\n';


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