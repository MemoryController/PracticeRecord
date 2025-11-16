#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e3+10;
typedef pair<ll,ll> pll;

// 平均时间最小 -> 总时间最小 -> 时间短的排在前面
int n;
ll pre[N],total;
pll people[N];
void solve(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>people[i].first;
        people[i].second = i;
    }
    sort(people+1,people+1+n);
    pre[1] = 0;
    for(int i=2; i<=n; i++){
        pre[i] = pre[i-1] + people[i-1].first;
    }
    for(int i=1; i<=n; i++){
        total += pre[i];
    }
    for(int i=1; i<=n; i++){ 
        cout<<people[i].second<<' ';
    }
    printf("\n%.2f\n",((double)total)/n);



}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _=1;
    while(_--){
        solve();
    }
    return 0;
}