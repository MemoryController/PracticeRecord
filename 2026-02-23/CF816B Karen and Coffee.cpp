#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 2e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

// 差分
int diff[N],vis[N],pre[N]; // vis[i]>=k 则表明是可用点
void solve(){
    int n,k,q=0;
    cin>>n>>k>>q;
    while(n--){
        int l,r;
        cin>>l>>r;
        diff[l]++;
        diff[r+1]--;
    }
    for(int i=1;i<N;i++){
        vis[i] = diff[i] + vis[i-1];
    }
    // 将符合条件的设为1 不符合的设为0 再求前缀和
    for(int i=1;i<N;i++){
        if(vis[i]>=k) vis[i] = 1;
        else vis[i] = 0;
    }
    for(int i=1;i<N;i++){
        // 前缀和
        pre[i] = vis[i] + pre[i-1];
    }
    
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pre[r]-pre[l-1]<<'\n';
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