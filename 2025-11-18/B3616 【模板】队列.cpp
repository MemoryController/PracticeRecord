#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;

// 学习 queue使用


void solve(){
    queue<ull> que;
    int n;
    cin>>n;
    while(n--){
        int op;
        cin>>op;
        switch (op){
        case 1:
            ull x;
            cin>>x;
            que.push(x);
            break;
        case 2:
            if(que.empty()){
                cout<<"ERR_CANNOT_POP\n";
            }else{
                que.pop();
            }
            break;
        case 3:
            if(que.empty()){
                cout<<"ERR_CANNOT_QUERY\n";
            }else{
                cout<<que.front()<<'\n';
            }
            break;
        case 4:
            cout<<que.size()<<'\n';
            break;
        default:
            break;
        }
    }

}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _=1;
    //cin>>_;
    while(_--){
        solve();
    }
    return 0;
}