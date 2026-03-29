#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 1e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;


void solve(){
    string s,op;
    int idx = 0;
    int n,m;
    cin>>n>>m;
    cin>>s>>op;
    for(int i=0;i<m;i++){
        char o = op[i];
        switch(o){
            case 'L':
                if(idx!=0) idx--;
                break;
            case 'R':
                if(idx!=n-1) idx++;
                break;
            case 'U':
                if(s[idx]=='9') s[idx]='0';
                else s[idx]++;
                break;
            case 'D':
                if(s[idx]=='0') s[idx]='9';
                else s[idx]--;
                break;
        };
    }
    cout<<s<<'\n';  

}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _ = 1;
    cin>>_;
    while (_--)
    {
        solve();
    }
    return 0;
}