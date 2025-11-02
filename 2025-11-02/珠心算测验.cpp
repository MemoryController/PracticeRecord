#include<bits/stdc++.h>
using namespace std;
int buk[100][100],num,arr[100],cnt;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>num;
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    // 求和放入buk中
    for(int i=0; i<num-1; i++){
        for(int j=i+1; j<num;j++){
            buk[i][j] = arr[i]+arr[j];
        }
    }
    // 寻找相同的
    bool found = false;
    for(int k=0; k<num; k++){
        found = false;
        for(int i=0; i<num-1; i++){
            for(int j=i+1; j<num;j++){
                if(buk[i][j]==arr[k]){
                    cnt++;
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
    }

    cout<<cnt<<'\n';



    return 0;
}