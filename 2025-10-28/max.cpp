#include<bits/stdc++.h>
using namespace std;

int max_3(int a,int b,int c){
    if(a>b&&a>c){
        return a;
    }else if(b>a&&b>c){
        return b;
    }else{
        return c;
    }

}

int a,b,c;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>a>>b>>c;
    double m = (double)max_3(a,b,c) / ((double)max_3(a+b,b,c) * (double)max_3(a,b,b+c));
    
    printf("%.3f\n",m);

    return 0;
}