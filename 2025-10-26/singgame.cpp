#include<bits/stdc++.h>
using namespace std;
int num_stu,num_judge,this_scores[20]; //最终成绩是final_scores 当前学生的成绩是this_scores
double best_score = 0.0;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>num_stu>>num_judge;
    for (int i=0; i<num_stu; i++){
        for (int j=0; j<num_judge;j++){
            cin>>this_scores[j]; // 读入当前学生的数据
        }
        // 计算最终数据
        // 排序
        int temp = 0;
        for(int j=0;j<num_judge-1;j++){
            int min = j; // 最小数的下标
            for(int k=j+1;k<num_judge;k++){
                if(this_scores[k]<this_scores[min]){
                    min = k;
                }

            }
            if(j!=min){
                temp = this_scores[j];
                this_scores[j] = this_scores[min];
                this_scores[min] = temp;
            }
        }
        // 求和
        int sum = 0;
        for(int j=1;j<num_judge-1;j++){
            sum += this_scores[j];
        }
        double score;
        // 求最终成绩
        score = round(100.0*sum / (num_judge-2))/100; // 浮点数精度！！！！！
        if(score>best_score){
            best_score = score;
        }
        
    }
    printf("%.2f\n",best_score);

    return 0;
}