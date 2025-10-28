#include<bits/stdc++.h>
using namespace std;

struct people{
    string id;
    int age;
}old[100],young[100],temp;
int old_length=0,young_length=0,total;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>total;
    // 输入
    for(int i=0; i<total; i++){
        string tmp_id;
        int tmp_age;
        cin>>tmp_id>>tmp_age;
        if(tmp_age>=60){
            old[old_length].id=tmp_id;
            old[old_length].age = tmp_age;
            old_length++;

        }else{
            young[young_length].id=tmp_id;
            young[young_length].age = tmp_age;
            young_length++;
        }

    }
    // 按age降序
    bool swaped = false;
    for(int i=0; i<old_length-1; i++){
        swaped = false;
        for(int j=0; j<old_length-i-1; j++){
            if(old[j].age<old[j+1].age){
                temp = old[j];
                old[j] = old[j+1];
                old[j+1] = temp;
                swaped = true;
            }
        }
        if(!swaped){ // 没出现交换就说明弄完了
            break;
        }
    }
    //输出 先输出old
    for(int i=0; i<old_length; i++){
        cout<<old[i].id<<'\n';
    }
    for(int i=0; i<young_length; i++){
        cout<<young[i].id<<'\n';
    }   



    return 0;
}