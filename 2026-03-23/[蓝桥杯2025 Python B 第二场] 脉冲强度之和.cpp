#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 1000000007;
const int N = 1e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll ans = 0;
bool check(ll p){
    return ((p-45)%10==0 && p<=20255202);
}
void solve(){
    for(int n=2;n<=8;n++){
        for(int i=1;i<=9;i++){
            int p=0,idx=1;
            for(int j=0;j<n;j++){
                p += idx * i;
                idx *= 10;

            }
            if(check(p)){
                ans += p;
            }
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