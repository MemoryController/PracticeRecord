#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int arr[25],k,n,cnt=0;
bool is_prime(int num){
    if(num == 2) return 1;
    for(int i=2; i*i<num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
void dfs(int dep,int idx,int sum){
    sum += arr[idx];
    if(dep == k){
        if(is_prime(sum)) cnt++;
        return;        
    }
    for(int i=idx+1; i<n; i++){
        dfs(dep+1,i,sum);
    }

}
void solve(){
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=n-k+1; i++){
        dfs(1,i,0);
    }
    cout<<cnt<<'\n';

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