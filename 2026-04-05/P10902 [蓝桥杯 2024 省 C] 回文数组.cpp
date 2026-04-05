#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 1e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int n,arr[N];
ll ans=0;
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    //改前面和后面是等效的
    for(int i=1;i*2<=n;i++){
        if(arr[i]>arr[n-i+1] && arr[i+1]>arr[n-i]){
            int op = min(arr[i]-arr[n-i+1],arr[i+1]-arr[n-i]);
            ans += op;
            arr[i] -= op;arr[i+1] -= op;
            
        }else if(arr[i]<arr[n-i+1] && arr[i+1]<arr[n-i]){
            int op = min(arr[n-i+1]-arr[i],arr[n-i]-arr[i+1]);
            ans += op;
            arr[i] += op;arr[i+1] += op;
        }
        if(arr[i]>arr[n-i+1]){
            ans += arr[i] - arr[n-i+1];
            arr[i] = arr[n-i+1];
        }else if(arr[i]<arr[n-i+1]){
            ans += arr[n-i+1] - arr[i];
            arr[i] = arr[n-i+1];
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