#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int n,m,a[N],b[N],c[N];
ll ans = 0;
void solve(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    for(int i=0;i<n;i++){
        cin >> c[i];
    }
    cin >> m;
    int A=0,B=0,C=0;
    while(m--){
        int da,db,dc;
        cin>>da>>db>>dc;
        A += da;
        B += db;
        C += dc;
        A%=n;B%=n;C%=n;
        int x,y,z;
        x = a[A];
        y = b[B];
        z = c[C];
        int sum = x+y+z;
        if (x==y && y==z){
            ans += 200;
        }else if(x+1==y && y+1==z){
            ans += 200;
        }else if(x==y || y==z || x==z){
            ans += 100;
        }else if((x+1==y && y+1==z) || (y+1==x && x+1==z) || (y+1==z && z+1==x) || (x+1==z && z+1==y) || (z+1==x && x+1==y) || (z+1==y && y+1==x)){
            ans += 100;
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