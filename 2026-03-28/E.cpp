#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 1e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll n,m,k,ans=0;
ll arr[N],fee[N]; // fee[i]表示最终在某个位置的车费
void solve(){
    cin>>n>>m>>k;
    fee[1] = 0;
    for(int i=2;i<=n;i++){
        cin>>fee[i];
        fee[i] += fee[i-1];
    }
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int a=1;a<=n;a++){
        ll mon = m - fee[a];
        ll cnt = 0;
        if(mon<=ans) break;
        // 在前面挑几个
        bool vis[N];
        memset(vis,0,sizeof(bool)*N);
        for(int i=1;i<=min(k,(ll)a);i++){
            ll max_mine = 0,max_idx = 0;
            for(int j=1;j<=a;j++){
                if(!vis[j]){
                    if(max_mine<arr[j]){
                        max_mine = arr[j];
                        max_idx = j;
                    }
                }
            }
            vis[max_idx] = 1;
            if(mon<=max_mine){
                cnt += mon;
                break;
            }else{
                cnt += max_mine;
                mon -= max_mine;

            }
        }

        ans = max(ans,cnt);
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