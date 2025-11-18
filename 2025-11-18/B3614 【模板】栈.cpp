#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;

// 手动写一个 stack

void solve(){
    ull n;
    cin >> n;
    stack<ull> st;
    while (n--) {
        string op;
        cin >> op;
        if (op == "push") {
            ull x; 
            cin >> x;
            st.push(x);
        } else if (op == "pop") {
            if (st.empty()) cout << "Empty\n";
            else st.pop();
        } else if (op == "query") {
            if (st.empty()) cout << "Anguei!\n";
            else cout << st.top() << '\n';
        } else if (op == "size") {
            cout << st.size() << '\n';
        }
    }


}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _=1;
    cin>>_;
    while(_--){
        solve();
    }
    return 0;
}