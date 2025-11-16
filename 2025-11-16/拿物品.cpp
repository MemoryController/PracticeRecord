#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 2e5+10;
typedef pair<ll,ll> pll;


// 相当于是一方从另一方手里抢物品
// 抢到了分差变化 a_i+b_i 因此每个人优先拿a_i+b_i大的
pll items[N];
int arr1[N],arr2[N],idx1=1,idx2=1,n;
void solve(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>items[i].first;
    }
    for(int i=1; i<=n; i++){
        cin>>items[i].second;
        items[i].first += items[i].second;
        items[i].second = i;
    }
    
    sort(items+1,items+1+n,greater());
    for(int i=1; i<=n; i++){
        if((idx1+idx2)%2){
            arr2[idx2++] = items[i].second;
        }else{
            arr1[idx1++] = items[i].second;
        }
    }
    for(int i=1; i<idx1; i++){
        cout<<arr1[i]<<' ';
    }
    cout<<'\n';
    for(int i=1; i<idx2; i++){
        cout<<arr2[i]<<' ';
    }

    


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