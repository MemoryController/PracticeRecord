#include<bits/stdc++.h>
using namespace std;
string str;
bool flag = true;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>str;
    for(int i=0;i<(int)(str.length()/2);i++){
        if(str[i]!=str[str.length()-i-1]){
            flag = false;
        }
    }
    if(flag){
        cout<<"yes\n";
    }else{
        cout<<"no\n";
    }


    return 0;

}