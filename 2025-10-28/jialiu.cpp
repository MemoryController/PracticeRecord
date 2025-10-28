#include<bits/stdc++.h>
using namespace std;

struct People{
    string name;
    float temp;
    int is_cough;
} a_people;

int selected_num=0,total_num;// 被标记的人数 总人数

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>total_num;
    for(int i=0; i<total_num; i++){
        cin>>a_people.name>>a_people.temp>>a_people.is_cough;
        if(a_people.temp >= 37.5f && a_people.is_cough){
            cout<<a_people.name<<'\n';
            selected_num++;
        }
    }
    cout<<selected_num<<'\n';
    
    
    


    return 0;
}