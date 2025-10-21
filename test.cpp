#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    int count;
    count = 1;
    for(int num = 3; ;num+=2){
        char flag = 1;
        for(int i = num-1;i>2;i--){
            if(num%i==0){
                flag = 0;
            }
        }
        if (flag){
            count++;
        }  
        if(count==2025){
            cout<<num<<endl;
            break;

        }
        
    }
    
    return 0;
}