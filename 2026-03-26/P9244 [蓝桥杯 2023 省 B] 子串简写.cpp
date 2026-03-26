#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 5e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;


int k;
char c1,c2;
ll ans = 0;
int cnt_c2[N];
void solve(){
    string s;
    cin>>k>>s>>c1>>c2;
    ll num_c2 = 0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]==c2){
            num_c2++;
        }
        cnt_c2[i] = num_c2;
    }
    for(int i=0;i<s.length()-k+1;i++){
        if(s[i]==c1){
            ans += cnt_c2[i+k-1];
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