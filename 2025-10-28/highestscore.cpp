#include<bits/stdc++.h>
using namespace std;
int best_score=0,tmp_score,total;
string best_name;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>total;

    for(int i=0; i<total; i++){
        string tmp_name;
        cin>>tmp_score>>tmp_name;
        if(tmp_score>best_score){
            best_score = tmp_score;
            best_name = tmp_name;
        }
    }

    cout<<best_name<<'\n';

    return 0;
}