#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e5+10;

ll n,m,arr[N];
void solve(){
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<=m; i++){
        int op;
        cin>>op;
        if(op==1){
            ll a;
            cin>>a;
            for(int j=1; j<=n; j++){
                arr[j] += a;
            }


        }else if(op==2){
            ll sum_num = 0;
            for(int j=1; j<=n; j++){
                sum_num += max((ll)0,arr[j]);
            }
            cout<<sum_num<<'\n';
        }
    }

}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin>>_;
    while(_--) solve();
    return 0;
}