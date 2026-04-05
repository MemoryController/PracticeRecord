#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 1e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int vis[N][26];
void solve(){
    int k;cin>>k;
    string s;cin>>s;
    ll ans = 0;
    if(s.size() % k){
        cout<<"-1\n";
        return;
    }
    int len = s.size() / k;
    for(int i=0;(i+1)*len-1<s.size();i++){
        for(int j=0;j<len;j++){
            vis[j][s[i*len+j]-'a']++;
        }
    }

    for(int i=0;i<len;i++){
        int num = 0,m=0;
        for(int j=0;j<26;j++){
            m = max(m,vis[i][j]);
            num += vis[i][j];
        }
        num-=m;
        ans+=num;
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