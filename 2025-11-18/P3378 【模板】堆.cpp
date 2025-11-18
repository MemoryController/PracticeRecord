#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;

// 小顶堆(优先队列)

void solve(){
    priority_queue<int,vector<int>,greater<int>> pq;
    int n;
    cin>>n;
    while(n--){
        int op;
        cin>>op;
        switch(op){
            case 1:
                int x;
                cin>>x;
                pq.push(x);
                break;
            case 2:
                cout<<pq.top()<<'\n';
                break;
            case 3:
                pq.pop();
                break;
            default:
                break;
        }
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