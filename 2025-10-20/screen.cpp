#include<bits/stdc++.h>

using namespace std;

string p[5]={
    "XXX...X.XXX.XXX.X.X.XXX.XXX.XXX.XXX.XXX",
    "X.X...X...X...X.X.X.X...X.....X.X.X.X.X",
    "X.X...X.XXX.XXX.XXX.XXX.XXX...X.XXX.XXX",
    "X.X...X.X.....X...X...X.X.X...X.X.X...X",
    "XXX...X.XXX.XXX...X.XXX.XXX...X.XXX.XXX"
}; // 利用示例构建被截取用来显示的内容
/*
如果 3*k~3*k+1 是 k 显示列数
 */
int length;
string content; // 需要被显示的内容
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>length;
    cin>>content;
    for(int j=0;j<5;j++){
        for(int i=0;i<length;i++){
            char idx=content[i]-'0'; //相当于转换类型
            cout<<p[j][idx*4]<<p[j][idx*4+1]<<p[j][idx*4+2];
            if(i!=length-1){
                cout<<".";
            }
        }
        cout<<'\n';
    }
    




    return 0;

}

