#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 200 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int n,a,b,op[N];
ll vis[N];
// DFS太费时间，应当使用BFS
void solve(){
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        cin>>op[i];
    }
    queue<int> q;
    vis[a] = 1;
    q.push(a);
    while (!q.empty()){
        int t = q.front();q.pop();
        if(t+op[t]<=n && vis[t+op[t]]==0){
            q.push(t+op[t]);
            vis[t+op[t]] = vis[t]+1;
        }
        if(t-op[t]>=1 && vis[t-op[t]]==0){
            q.push(t-op[t]);
            vis[t-op[t]] = vis[t]+1;
        }


    }
    if(vis[b]==0){
        cout<<"-1\n";
    }else{
        cout<<vis[b]-1<<'\n';
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