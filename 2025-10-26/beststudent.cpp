#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int cn;
    int math;
    int eng;
}; //定义学生结构体

int num,best_idx,best_score;
struct Student stus[1000];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>num;
    best_score = 0;
    for(int i=0 ; i<num; i++){
        cin>>stus[i].name
            >>stus[i].cn
            >>stus[i].math
            >>stus[i].eng;
    }
    for(int i=0; i<num; i++){
        if((stus[i].cn+stus[i].math+stus[i].eng)>best_score){
            best_score = stus[i].cn+stus[i].math+stus[i].eng;
            best_idx = i;
        }
    }
    cout<<stus[best_idx].name<<' '<<stus[best_idx].cn<<' '<<stus[best_idx].math<<' '<<stus[best_idx].eng<<'\n';
    
    return 0;
}
