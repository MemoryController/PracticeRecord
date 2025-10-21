#include<bits/stdc++.h>
using namespace std;
string str;
int mat1[100][100],mat2[100][100],n,m,mat3[100][100];
bool flag = false; //有没有出现
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat3[i][j]<<' ';
        }
        cout<<'\n';
    }
    
   

    return 0;

}