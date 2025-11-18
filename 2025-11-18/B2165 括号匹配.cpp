#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;

// 用stack来决定接下来应该是什么

void solve(){
    string s;
    cin >> s;
    stack<char> stk;
    bool ok = true;
    for(int i=0;i<s.length();i++){
        switch (s[i]){
            case '(':
                stk.push(')');
                break;
            case '[':
                stk.push(']');
                break;
            case '{':
                stk.push('}');
                break;
            case ')':
                if(stk.empty() || stk.top()!=')'){
                    ok = false;
                }else{
                    stk.pop();
                }
                break;
            case ']':
                if(stk.empty() || stk.top()!=']'){
                    ok = false;
                }else{
                    stk.pop();
                }
                break;
            case '}':
                if(stk.empty() || stk.top()!='}'){
                    ok = false;
                }else{
                    stk.pop();
                }
                break;
            default:
                break;
        }
        if(!ok){
            break;
        }
    }
    if(ok && stk.empty()) cout<<"YES\n";
    else cout<<"NO\n";


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