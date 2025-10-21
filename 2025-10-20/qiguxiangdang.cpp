#include<bits/stdc++.h>
using namespace std;
int num,sequence[10000],result;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>num;
    result = 0;
    for(int i=0;i<3*num;i++){
        cin>>sequence[i]; //读入数据
    }
    for(int i=0;i<num-1;i++){
        for(int j=i+1;j<num;j++){
            // 判定i j 同学是否符合条件
            bool isok = true;
            int i_total = 0;
            int j_total = 0;
            for(int k=0;k<3;k++){
                if(sequence[3*i+k]-sequence[3*j+k]>5 || sequence[3*i+k]-sequence[3*j+k]<-5){
                    // 比较单科
                    isok = false;
                    break;
                }
                i_total += sequence[3*i+k];
                j_total += sequence[3*j+k];
            }
            if(i_total-j_total>10 || i_total-j_total<-10){
                isok = false;
            }
            if(isok){
                result++;
            }
        }
    }
    cout<<result<<'\n';

    return 0;
}