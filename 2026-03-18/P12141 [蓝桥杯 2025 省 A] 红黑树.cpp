#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int m;
bool is_red(ll n,ll k){
    if (n==1) return 1;
    if (n==2) return k%2;
    if (k%2){
        return is_red(n-1,(k+1)/2);
    }else{
        return !is_red(n-1,(k+1)/2);
    }

}
void solve(){
    cin>>m;
    while(m--){
        ll n,k;
        cin>>n>>k;
        if(is_red(n,k)){
            cout<<"RED\n";
        }else{
            cout<<"BLACK\n";
        }
    }





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