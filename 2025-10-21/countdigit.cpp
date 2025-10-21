#include<bits/stdc++.h>
using namespace std;
int n,x,num;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>x;
    num = 0;
    for(int i=1;i<=n;i++){
        int current = i;
        while(current){
            if(current%10==x){
                num++;
            }
            current = (int)(current/10);
        }
    }
    cout<<num<<'\n';
   

    return 0;

}