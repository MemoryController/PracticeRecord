#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 1e9+7;
const int N = 1e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int arr[N];
void solve(){
    memset(arr,0,N*sizeof(int));
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    bool ok = 1;
    for(int i=1;i<n;i++){
        if(arr[i+1]-arr[i]>1 || arr[i]-arr[i+1] > x){
            ok = 0;
            break;
        }

    }
    if(ok){
        cout<<"Win\n";
    }else{
        cout<<"Lose\n";
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