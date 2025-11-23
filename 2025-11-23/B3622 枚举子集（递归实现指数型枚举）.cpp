#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e4 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

string s; // 当成一个栈来用存储
int n;
void dft(int m){
    // m代表这是第几层
    if(m == n+1){
        cout<<s<<'\n';
        return; // 要记得结束递归
    }
    s += 'N'; //按字典序 N在前面
    dft(m+1);
    s.pop_back();

    s += 'Y';
    dft(m+1);
    s.pop_back();
    
}
void solve(){
    cin>>n;
    dft(1);
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