#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5 + 10;
const ll MOD = 1e6+7;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int n,q;
pii arr[N];
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i].first;
        arr[i].second = i;
    }
    sort(arr+1,arr+n+1);
    cin>>q;
    while(q--){
        int t;
        cin>>t;
        int l=1,r=n;
        bool ok =0;
        while(r-l>1){
            int mid = (l+r) /2;
            if(arr[mid].first==t){
                cout<<arr[mid].second<<'\n';
                ok =1;
                break;
            }
            if(arr[mid].first>t){
                r = mid;
            }else{
                l = mid;
            }
        }
        if(arr[l].first == t){
            cout<<arr[l].second<<'\n';
            ok =1;
        }else if(arr[r].first == t){
            cout<<arr[r].second<<'\n';
            ok =1;
        }
        if(!ok){
            cout<<"0\n";
        }
    }


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