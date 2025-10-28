#include<bits/stdc++.h>
using namespace std;
string str = "WHERETHEREISAWILLTHEREISAWAY";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    for(int i=0; i<str.length(); i++){
        for(int j=0; j<str.length()-i-1;j++){
            if(str[j]>str[j+1]){
                str[j] = str[j+1] ^ str[j];
                str[j+1] = str[j+1] ^ str[j];
                str[j] = str[j+1] ^ str[j];
            }   
        }
    }
    cout<<str;
    return 0;
}