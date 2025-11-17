#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;

// 二分答案
int n,p;
pii arr[N];
bool check(double mid){
    double total_lack = 0;// 总共缺少多少
    for(int i=1; i<=n; i++){
        total_lack += max(arr[i].first*mid-arr[i].second,0.0);
    }
    return total_lack<=(p*mid);
}

void solve(){
    cin>>n>>p;
    for(int i=1; i<=n; i++){
        cin>>arr[i].first>>arr[i].second;
    }
    double l=0,r=1e12; // 竟然需要1e12才能过所有用例范围 更多会超时
    bool is_inf= true;
    while(r-l>1e-4){
        double mid = (r+l)/2;
        if(check(mid)){
            // 符合条件说明少了或者正好
            l = mid;
        }else{
            r = mid;
            is_inf = false;
        }

    }
    if(is_inf){
        cout<<"-1\n";
    }else{
        cout<<l<<'\n';
    }
    


}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _=1;
    while(_--){
        solve();
    }
    return 0;
}