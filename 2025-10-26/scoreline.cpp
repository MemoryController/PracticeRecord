#include<bits/stdc++.h>
using namespace std;

struct Student{
    int id;
    int score;

} stus[5000],temp_stu;

int total_num,limit_num,score_limit,rank_limit;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    // 接受输入
    cin>>total_num>>limit_num;
    for(int i = 0; i < total_num; i++){
        cin>>stus[i].id>>stus[i].score;
    }
    // 排序 降序
    for (int i = 0; i < total_num-1; i++){
        for (int j = 0; j < total_num-i-1; j++){
            if(stus[j].score<stus[j+1].score){
                temp_stu = stus[j];
                stus[j] = stus[j+1];
                stus[j+1] = temp_stu;
            }else if(stus[j].score==stus[j+1].score){
                if(stus[j].id>stus[j+1].id){
                    temp_stu = stus[j];
                    stus[j] = stus[j+1];
                    stus[j+1] = temp_stu;
                }
            }

        }
    }
    rank_limit = (int)(1.5*limit_num); // 面试人数限制
    // 检查同分
    while(stus[rank_limit].score == stus[rank_limit-1].score){
        rank_limit++;
    }

    score_limit = stus[rank_limit-1].score; // 分数线
    cout<<score_limit<<' '<<rank_limit<<'\n';
    for (int i = 0; i<rank_limit; i++){
        cout<<stus[i].id<<' '<<stus[i].score<<'\n';
    }
    
    return 0;
}