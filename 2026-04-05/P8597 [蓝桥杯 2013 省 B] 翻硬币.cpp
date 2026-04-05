#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 1e4 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

string s1,s2;
ll ans=0;
void change(int idx){
    if(s1[idx]=='o'){
        s1[idx] = '*';
    }else if(s1[idx]=='*'){
        s1[idx] = 'o';
    }
}
void solve(){
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
        bool changed = 0;
        for(int j=0;j<s1.size()-1;j++){
            if(s1[j]!=s2[j]){
                changed = 1;
                change(j);change(j+1);
                ans++;
            }
        }
        if(s1[s1.size()-1]!=s2[s1.size()-1]){
            changed = 1;
            change(s1.size()-1);change(s1.size()-2);
            ans++;
        }
        if(!changed){
            break;
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