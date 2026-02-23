#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e4 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int n,ans=0;
ll arr[N],pre[N];
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        pre[i] = (pre[i-1] + arr[i]) % 7;
    }
    for(int k=0;k<=6;k++){
        int l=0,r=0;
        for(int i=0;i<=n;i++){// 从0开始 免得把第一个奶牛排除了
            if(k==pre[i]){
                l = i;
                break;
            }
        }
        for(int i=n;i>=1;i--){
            if(k==pre[i]){
                r = i;
                break;
            }
        }
        ans = max(ans,r-l);
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