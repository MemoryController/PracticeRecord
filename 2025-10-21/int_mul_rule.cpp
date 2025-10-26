#include<bits/stdc++.h>
using namespace std;
long long xa,xb,ya,yb;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>xa>>xb>>ya>>yb;
    if((xa*yb == (int)(xa*yb)) &&
        (xa*ya == (int)(xa*ya)) &&
        (xb*yb == (int)(xb*yb)) &&
        (xb*ya == (int)(xb*ya))){
            cout<<"int\n";
    }else{
        cout<<"long long int\n";
    }

    return 0;
}