#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e4 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;


int n,k,last_sum=0;
vector<int> arr;
ll ans = 0;
void dfs(int dep){
    if(dep>k-1){ // 自由度只有 k-1
        if(n-last_sum>=arr.back())
            ans++;
        return;
    }
    for(int i=arr.back(); i<=n-last_sum-i; i++){ // 剪枝保证数组递增
        last_sum += i;
        arr.push_back(i);
        dfs(dep+1);
        arr.pop_back();
        last_sum -= i;
    }

}
void solve(){
    cin>>n>>k;
    arr.push_back(1);
    dfs(1);
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