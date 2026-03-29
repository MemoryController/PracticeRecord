#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 1e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

vector<ll> a=vector<ll>(),b=vector<ll>();
ll cnt = 0;
void solve(){
    ll cnt_a=0,cnt_b=0;
    for(ll i=789456;cnt_a<=901234;i+=567890,cnt_a++){
        a.push_back(i);
    }
    for(ll i=654321;cnt_b<=500001;i+=876543,cnt_b++){
        b.push_back(i);
    }
    for(ll i:a){
        int c;
        for(int j=0;j<b.size();j++){
            if(b[j]>i){
                c = j;
                break;
            }
        }
        cnt += b.size()-c;
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