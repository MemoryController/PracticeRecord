#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int arr_s[15],arr_b[15],n;
ll ans = INF;

// 这里的sum_s是相乘 sum_b是相加 题目的坑
void dfs(int idx,ll sum_s,ll sum_b){
    if(idx==n) return;
    sum_s *= arr_s[idx];sum_b += arr_b[idx];
    ans = min(ans,abs(sum_s-sum_b));
    for(int i=idx+1; i<n; i++){
        dfs(i,sum_s,sum_b);
    }
    
}

void solve(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>arr_s[i]>>arr_b[i];
    }
    for(int i=0; i<n; i++){
        dfs(i,1,0);
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