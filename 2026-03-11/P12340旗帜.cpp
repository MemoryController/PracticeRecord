#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 2e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

string s = "LANQIAO";
int h,w;
int cnt=0;
void solve(){
    cin>>h>>w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            char c = s[(i+j)%7];
            if(c=='A') cnt++;
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