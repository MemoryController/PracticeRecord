#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 1e4 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

string s,t;
void solve(){
    cin>>s>>t;
    ll ans = 0;
    for(int i=0,j=0;i<s.size() && j<t.size();i++){
        if(s[i]==t[j]){
            ans++;
            j++;
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