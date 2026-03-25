#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 1e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll cnt = 0;
string s;
bool check(int l,int r){
    bool ok = 0;
    for(int i=l; 2*i<=r+l; i++){
        if(s[i]>s[r+l-i]){
            ok=1;
            break;
        }else if(s[i]<s[r+l-i]){
            ok = 0;
            break;
        }
    }
    return ok;
}
void solve(){
    cin>>s;
    for(int l=0;l<s.length()-1;l++){
        for(int r=l+1;r<s.length();r++){
            cnt += check(l,r);
        }
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