#include<bits/stdc++.h>
using namespace std;
int sequence[10000],length;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    length = 0;

    while(true){
        cin>>sequence[length];
        if(sequence[length]){
            length++;
        }else{
            break;
        }
        
    }
    for(int i=length-1;i>=0;i--){
        cout<<sequence[i]<<' ';
    }
    cout<<'\n';




    return 0;

}