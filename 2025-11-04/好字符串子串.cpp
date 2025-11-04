#include<bits/stdc++.h>
using namespace std;

string str;
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int pre_count[3][2005],n,ans=0; // 表示每一个数字在该位置之前出现多少次

    cin>>n>>str;
    for(int i=1; i<=n; i++){
        pre_count[0][i] = 0;
        pre_count[1][i] = 0;
        pre_count[2][i] = 0;
    }
    for(int i=1; i<=n; i++){
        // int target = str[i-1]-'1';
        // for(int j=0;j<3;j++){
        //     // if(target==j){
        //     //     pre_count[j][i] = pre_count[j][i-1] + 1;
        //     // }else{
        //     //     pre_count[j][i] = pre_count[j][i-1];
        //     // }
            
        // }
        
        pre_count[0][i] = pre_count[0][i-1] + (str[i-1] == 0);
        pre_count[1][i] = pre_count[1][i-1] + (str[i-1] == 1);
        pre_count[2][i] = pre_count[2][i-1] + (str[i-1] == 2);
  
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1; j<=n; j++){
            if(pre_count[0][j]-pre_count[0][i]==pre_count[1][j]-pre_count[1][i] && pre_count[2][j]-pre_count[2][i]==pre_count[1][j]-pre_count[1][i] && pre_count[1][j]-pre_count[1][i] != 0){
                ans++;
            }
        }
    }

    cout<<ans<<'\n';



    return 0;
}