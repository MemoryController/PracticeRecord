#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

string s;
ll ans = 0;
bool check1(int l,int r){
    // 检查连续非递减
    bool ok =1;
    for(int i=l+1;i<=r;i++){
        if(s[i]!=s[i-1] && s[i]!=s[i-1]+1){
            ok = 0;
            break;
        }
    }
    return ok;
}
bool check(int l,int r){
    if(l==r){
        return 1;
    }
    if(check1(l,r)){
        return 1;
    }
    bool ok = 0;
    for(int i=l;i<r;i++){
        if(check1(l,i) && check1(i+1,r)){
            ok = 1;
            break;
        }
    }
    return ok;
    

}

void solve(){
    cin>>s;
    for(int i=0;i<s.length();i++){
        for(int j=i;j<s.length();j++){
            if(check(i,j)){
                ans++;
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