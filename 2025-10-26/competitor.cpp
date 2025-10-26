#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int score[4]; // cn math eng total
}stus[1000];

bool compare(struct Student stu1,struct Student stu2){
    for(int i = 0; i<3; i++){
        if(abs(stu1.score[i]-stu2.score[i])>5){
            return false;
        }
    }
    if (abs(stu1.score[3]-stu2.score[3])>10){
        return false;
    }
    return true;
}
int num;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>num;
    // 读入数据 并且求出分数和
    for(int i = 0; i < num; i++){
        int sum = 0;
        cin>>stus[i].name;
        for(int j = 0; j < 3; j++){
            cin>>stus[i].score[j];
            sum += stus[i].score[j];
        }
        stus[i].score[3] = sum;
    }
    // 按输入顺序 比较输出
    for (int i = 0; i < num-1; i++){
        for (int j = i+1; j < num; j++){
            if(compare(stus[i],stus[j])){
                cout<<stus[i].name<<' '<<stus[j].name<<'\n';
            }

        }
    }
    




    return 0;
}