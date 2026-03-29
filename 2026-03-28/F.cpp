#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 1e6 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll n,x,y,w,arr[N];
ll ans = 0;
void solve(){
    cin>>n>>x>>y>>w;
    for(int i=1;i<=n;i++){
        int f,a;
        cin>>f>>a;
        arr[f] += a;
    }
    ll ele_cnt = 0; // 电梯人数 
    for(int i=x;i<y;i++){ // 先送上去一趟
        if(ele_cnt == w) break;
        ans += y-x;
        ele_cnt += min(arr[i],w-ele_cnt);
        arr[i] -= min(arr[i],w-ele_cnt);
    }
    ele_cnt = 0;
    bool is_empty = 1;
    while(!is_empty){
        // 寻找第一个非0点
        ll pt = 0;
        for(int i=1;i<=y;i++){
            if(arr[i]){
                is_empty = 0;
                pt = i;
                break;
            }
        }
        for(int i=pt;i<y;i++){
            if(ele_cnt == w) break;
            ans += 2*(y-pt);
            ele_cnt += min(arr[i],w-ele_cnt);
            arr[i] -= min(arr[i],w-ele_cnt);
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