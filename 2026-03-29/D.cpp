#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 1e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;


void solve(){ // 2的若干次方就是Fang 否则是Ben
    int n;cin>>n;
    bool ok = 1;
    
    while(n>2){
        if(n&1){ // 判断末位
            ok=0;
            break;
        }
        n>>=1; // 除以2
    }   
    if(ok){
        cout<<"Fang\n";
    }else{
        cout<<"Ben\n";
    }

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