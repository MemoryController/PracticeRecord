#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e4 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

void solve(){
    ll n;
    cin>>n;
    map<string,ll> mp;
    while(n--){
        string s;
        cin>>s;
        mp[s] = 1;
    }
    ll m;
    cin>>m;
    while(m--){
        string s;
        cin>>s;
        if(mp[s] == 1){
            mp[s]++;
            cout<<"OK\n";
        }else if(mp[s] == 0){
            cout<<"WRONG\n";
        }else if(mp[s] == 2){
            cout<<"REPEAT\n";
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