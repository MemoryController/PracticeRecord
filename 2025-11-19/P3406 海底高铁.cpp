#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;



void solve(){
    int n,m;
    ll ans=0;
    cin>>n>>m;
    vector<int> cities(m+1); // 1-based
    for(int i=1; i<=m;i++){
        cin>>cities[i];
    }
    vector<ll> vis(n+1),diff_vis(n+1); // 每段做了几次以及他的差分 一共n-1段铁路
    for(int i=1; i<=m-1; i++){
        diff_vis[max(cities[i],cities[i+1])] --;
        diff_vis[min(cities[i],cities[i+1])] ++;
    }
    for(int i=1; i<=n-1; i++){
        vis[i] = vis[i-1] + diff_vis[i];
    }
    vector<pair<ll,pair<ll,ll>>> cost(n);
    for(int i=1; i<=n-1; i++){
        cin>>cost[i].first>>cost[i].second.first>>cost[i].second.second;
    }
    for(int i=1; i<=n-1; i++){
        ans += min(cost[i].first*vis[i] ,cost[i].second.first*vis[i]+cost[i].second.second);
    }
    cout<<ans<<'\n';


    

}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _ = 1;
    while (_--)
    {
        solve();
    }
    return 0;
}