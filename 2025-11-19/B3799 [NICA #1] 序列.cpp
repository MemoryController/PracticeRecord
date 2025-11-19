#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;


ll n,m,arr[N],pre[N],added_num=0;
void solve(){
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+1+n);
    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1] + arr[i];
    }
    arr[0] = -INF;

    for(int i=1; i<=m; i++){
        int op;
        cin>>op;
        if(op==1){
            ll a;
            cin>>a;
            added_num += a;


        }else if(op==2){
            int idx = lower_bound(arr+1,arr+1+n,-added_num)-arr-1; // 找最后一个小于等于0的点
            cout<<pre[n]-pre[idx] + added_num*(n-idx)<<'\n';
        }
    }

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