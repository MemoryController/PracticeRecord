#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 1e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

bool vis[30];
vector<int> s = vector<int>();
int n,m;
void dfs(int num){
    s.push_back(num);
    vis[num] = 1;
    if(s.size()==m){
        for(int a:s){
            cout<<a<<' ';
        }
        cout<<'\n';
    }
    for(int i=num+1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    vis[num] = 0;
    s.pop_back();
}

void solve(){
    cin>>n>>m;

    for(int i=1;i<=n-m+1;i++){
        dfs(i);
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