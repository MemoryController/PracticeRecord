#include<bits/stdc++.h>
using namespace std;
string str;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>str;
    for(int i = 0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i] + 'A' - 'a';
        }
    }
    cout<<str<<'\n';
    return 0;
}