#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 1000000007;
const int N = 5e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll cnt = 0;
bool check(ll n){
    return n!=1;

}
void solve(){
    int n;
    cin >> n;
    
    
    while(n--){
        int a;cin>>a;
        cnt += check(a);
    }
    cout<<cnt<<'\n';




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