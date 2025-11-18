#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;



int n,q;
void solve(){
    cin>>n>>q;
    vector<vector<ll>> arr(n);
    while(q--){
        int oper;
        cin>>oper;
        if(oper == 1){
            ll i,j,k;
            cin>>i>>j>>k;
            if(arr[i].size()<j+1){
                // 如果需要扩展空间的话才这么做
                arr[i].resize(j+1);// 扩展空间 +1 是为了 1-based
            }
            
            if(k){
                arr[i][j] += k;
            }else{
                arr[i][j] = 0;
            }

        }else if(oper == 2){
            ll i,j;
            cin>>i>>j;
            cout<<arr[i][j]<<'\n';
        }
    }
    


}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _=1;
    while(_--){
        solve();
    }
    return 0;
}