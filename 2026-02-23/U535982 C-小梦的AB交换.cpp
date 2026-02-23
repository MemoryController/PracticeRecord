#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5 + 10;
const ll MOD = 1e6+7;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

void solve(){
    int n;string s;
    cin>>n>>s;
    // 当某个所有字符的下标奇偶性相同时则成功
    int single=0,dup=0;
    for(int i=0;i<2*n;i++){
        if(s[i]=='A'){// 只统计一个即可
            if(i & 1){
                single++;
            }else{
                dup++;
            }
        }
    }
    cout<<min(single,dup)<<'\n';


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