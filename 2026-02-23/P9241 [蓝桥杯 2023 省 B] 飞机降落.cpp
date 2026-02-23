#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 10 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

// dfs
bool vis[N],ok=0;
int t_arr[N],d_arr[N],l_arr[N],n;
void dfs(int idx,int dep,int last_time){
    if(dep==n){
        if(last_time<=(t_arr[idx]+d_arr[idx])) ok = 1;
        return;
    }
    if(last_time<=(t_arr[idx]+d_arr[idx])){
        vis[idx] = 1;
        int next_time = max(last_time,t_arr[idx]) + l_arr[idx];
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                dfs(i,dep+1,next_time);
            }
        }

        vis[idx] = 0;
    }


}
void solve(){
    cin>>n;
    ok = 0;
    memset(vis,0,sizeof(vis));
    memset(t_arr,0,sizeof(t_arr));
    memset(d_arr,0,sizeof(d_arr));
    memset(l_arr,0,sizeof(l_arr));

    for(int i=1;i<=n;i++){
        cin>>t_arr[i]>>d_arr[i]>>l_arr[i];
    }
    for(int i=1;i<=n;i++){
        dfs(i,1,0);
    }

    if(ok){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
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