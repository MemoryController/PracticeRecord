#include<bits/stdc++.h>
using namespace std;
string str;
double s,step_length;
int steps;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    steps = 0;
    step_length = 2.0;
    cin>>s;
    while(s>0.0){
        steps++;
        s -= step_length;
        step_length *= 0.98;
    }
    cout<<steps<<'\n';

   

    return 0;

}