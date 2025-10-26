#include<bits/stdc++.h>
using namespace std;
bool flag;
char square_1[10][10],square_2[10][10];
int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>n;
    // 读入数据
    for(int i = 0;i < n;i ++){
        for (int j = 0; j < n; j++){
            cin>>square_1[i][j];
        }
    }
    for(int i = 0;i < n;i ++){
        for (int j = 0; j < n; j++){
            cin>>square_2[i][j];
        }
    }

    // 90
    flag = true;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (square_1[i][j] != square_2[j][n-1-i]){
                flag = false;
                break;
            }

        }
        if(!flag){
            break;
        }
    }
    if(flag){
        cout<<"1\n";
        return 0;
    }

    // 180 
    flag = true;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (square_1[i][j] != square_2[n-1-i][n-1-j]){
                flag = false;
                break;
            }

        }
        if(!flag){
            break;
        }
    }
    if(flag){
        cout<<"2\n";
        return 0;
    }

    // 270 
    flag = true;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (square_1[i][j] != square_2[n-1-j][i]){
                flag = false;
                break;
            }

        }
        if(!flag){
            break;
        }
    }
    if(flag){
        cout<<"3\n";
        return 0;
    }

    // reflect 
    flag = true;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (square_1[i][j] != square_2[i][n-1-j]){
                flag = false;
                break;
            }

        }
        if(!flag){
            break;
        }
    }
    if(flag){
        cout<<"4\n";
        return 0;
    }

    // combine 
    flag = true;
    char temp;
    for (int i = 0; i < n/2; i++){
        for (int j = 0; j < n/2; j++){
            // 镜像一下
            temp = square_1[i][j];
            square_1[i][j] = square_1[i][n-1-j];
            square_1[i][n-1-j] = temp;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((square_1[i][j] != square_2[j][n-1-i]) &&
                (square_1[i][j] != square_2[n-1-i][n-1-j]) &&
                (square_1[i][j] != square_2[n-1-j][i])){
                flag = false;
                break;
            }

        }
        if(!flag){
            break;
        }
    }
    if(flag){
        cout<<"5\n";
        return 0;
    }

    // no change 
    flag = true;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (square_1[i][j] != square_2[i][j]){
                flag = false;
                break;
            }
        }
        if(!flag){
            break;
        }
    }
    if(flag){
        cout<<"6\n";
        return 0;
    }

    cout<<"7\n";
    return 0;
}