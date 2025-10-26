#include<bits/stdc++.h>
using namespace std;

int people_num,ticket_num,target;
int people[1000];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> people_num >> ticket_num;
    for(int i = 0 ; i < ticket_num; i++){
        cin>>target;
        people[target-1]++; //改成对候选人计数 避免超时的排序
    }

    for(int i = 0; i < people_num; i++){
        for(int j = 0; j < people[i]; j++){
            cout<<i+1<<' ';
        }
    }
    cout<<'\n';
    
    return 0;
}