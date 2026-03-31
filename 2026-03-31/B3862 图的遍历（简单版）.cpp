#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 1e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

vector<int> con[N];
bool vis[N];
void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        con[a].push_back(b);
        // con[b].push_back(a); // 有向图 这个不能要
    }
    for(int i=1;i<=n;i++){
        int ans = i;
        memset(vis,0,sizeof(bool)*N);
        queue<int> q;
        q.push(i);
        vis[i] = 1;
        while(!q.empty()){
            int idx = q.front(); q.pop();
            for(int next:con[idx]){
                if(!vis[next]){
                    vis[next]=1;
                    q.push(next);
                    ans = max(next,ans);
                }
            }

        }
        cout<<ans<<' ';
    }
    cout<<'\n';


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