#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 200 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

bool vis[N];
int arr[10] = {5,5,10,10,15,15,20,20,25,25};
void dfs(int dep,int cent){
    if(dep==10){
        vis[cent] = 1;
        return;
    }
    dfs(dep+1,cent+arr[dep]);
    dfs(dep+1,cent);
}
void solve(){
    dfs(0,0);
    int ans = 0;
    for(int i=0;i<N;i++){
        ans += vis[i];
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