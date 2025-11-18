#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;

// 小顶堆(优先队列) 每次合并最后的两个

void solve(){
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    int n;
    ll ans=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        ll tmp;
        cin>>tmp;
        pq.push(tmp);
    }
    for(int i=1; i<n; i++){
        ll a,b;
        a = pq.top();
        pq.pop();
        b = pq.top(); // O(n)
        pq.pop(); // O(logn)
        pq.push(a+b);
        ans += a+b;
    }
    cout<<ans<<'\n';
    

}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _=1;
    // cin>>_;
    while(_--){
        solve();
    }
    return 0;
}