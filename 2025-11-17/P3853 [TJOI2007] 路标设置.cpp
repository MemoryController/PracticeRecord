#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;

// 二分答案

int arr[N];
int len,num,k;
bool check(int mid){
    int idx=1,added=0;
    for(int i=1;i<num;i++){
        if(arr[i+1]-arr[i] > mid){
            added += ceil((double)(arr[i+1]-arr[i])/mid) - 1;
        }
    }
    return added<=k;

}
void solve(){
    cin>>len>>num>>k;
    for(int i=1; i<=num; i++){
        cin>>arr[i];
    }

    int l=0,r=len+1;
    while(r-l!=1){
        int mid = (r+l)>>1;
        // 如果符合的话就说明大了或者正好
        if(check(mid)){
            r = mid;
        }else{
            l = mid;
        }
    }
    cout<<r<<'\n';

}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _=1;
    while(_--){
        solve();
    }
    return 0;
}