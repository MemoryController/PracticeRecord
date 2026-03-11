#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 2e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll arr[N],diff[N];
bool vis[N];
int ans=0;
void solve(){
    for(int i=1; i<=2000; i++){
        char c1,c2;
        cin>>c1>>c2>>arr[i];
        vis[i] = c1 == c2;
    }
    arr[0] = arr[1];
    for(int i=1; i<=2000; i++){
        diff[i] = arr[i] - arr[i-1];
    }
    int cnt = 0;
    for(int i=1; i<=2000; i++){
        if(vis[i]){
            if(diff[i]<=1000){
                cnt++;
                ans = max(ans,cnt);
            }else{
                cnt=1;
            }
        }else{
            cnt = 0;
        }

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