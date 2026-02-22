#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 2e5 + 10;
const ll MOD = 1e6+7;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll arr[N],arr_c[N],n,c,ans=0;
void solve(){
    cin>>n>>c; // c>0
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    for(int i=1;i<=n;i++){
        arr_c[i] = arr[i] - c; // A-C
    }
    for(int i=1;i<=n;i++){
        int b = arr[i];
        int l = lower_bound(arr_c+1,arr_c+1+n,b) - arr_c;
        int u = upper_bound(arr_c+1,arr_c+1+n,b) - arr_c;
        if(arr_c[l] == b){
            ans += u-l;
            // 如果包含了i本身就需要排除
            if(u>=i && l<=i){
                ans--;
            }
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