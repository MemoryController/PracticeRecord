#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 1000000007;
const int N = 5e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;


void solve(){
    int a,b,c,k;
    cin>>a>>b>>c>>k;
    while(k--){
        int a0=a,b0=b,c0=c;
        a = (b0+c0)/2;
        b = (a0+c0)/2;
        c = (a0+b0)/2;

        //看了题解 取平均会使差别越来越小 a=b=c时退出即可
        if(a==b && b==c) break;
    }
    cout<<a<<' '<<b<<' '<<c<<'\n';    



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