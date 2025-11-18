#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;

// 字符串常用功能认识
string str;
int q;
void solve(){
    cin>>q>>str;
    while(q--){
        int op;
        cin>>op;
        if(op ==1){
            string tmp;
            cin>>tmp;
            str += tmp;
            cout<<str<<'\n';
        }else if(op==2){
            int a,b;
            cin>>a>>b;
            str = str.substr(a,b);
            cout<<str<<'\n';
        }else if(op==3){
            string tmp;
            int idx;
            cin>>idx>>tmp;
            str.insert(idx,tmp);
            cout<<str<<'\n';
        }else if(op==4){
            // find函数没有找到会返回一个非常大的整数
            string tmp;
            cin>>tmp;
            ll idx = str.find(tmp);
            if(idx > str.length()){
                cout<<"-1\n";
            }else{
                cout<<idx<<'\n';
            }
        }
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