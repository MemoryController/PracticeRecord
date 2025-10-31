#include<bits/stdc++.h>
using namespace std;
struct Student{
    int id;
    int cn,math,eng,total;
    bool operator>(const Student& s){
        if(total>s.total){
            return true;
        }else if(total==s.total && cn>s.cn){
            return true;
        }else if(total==s.total && cn==s.cn && id<s.id){
            return true;
        }else{
            return false;
        }
    }

} stus[300];

int num;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>num;
    for(int i=0; i<num; i++){
        stus[i].id = i+1;
        cin>>stus[i].cn>>stus[i].math>>stus[i].eng;
        stus[i].total = stus[i].cn + stus[i].math + stus[i].eng;
    }
    sort(stus,stus+num,greater<>());

    for(int i=0; i<5; i++){
        cout<<stus[i].id<<' '<<stus[i].total<<'\n';
    }


    return 0;
}