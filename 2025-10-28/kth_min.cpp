#include<bits/stdc++.h>
using namespace std;

int num,k,arr[10000],min_rank=0; // rank是指当前是第几小
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>num>>k;
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    // 冒泡排序执行到rank==k就停止 降序
    bool have_result = false;
    for(int i=0; i<num; i++){
        for(int j=0; j<num-i-1; j++){
            if(arr[j]<arr[j+1]){
                arr[j] = arr[j] ^ arr[j+1];
                arr[j+1] = arr[j] ^ arr[j+1];
                arr[j] = arr[j] ^ arr[j+1];
            }
        }
        if(i){
            //i不是0的话就要比较 num-1-i个和后面一个
            if(arr[num-i-1]!=arr[num-i]){
                min_rank++;
            }

        }else{
            min_rank++;
        }
        if(min_rank==k){
            cout<<arr[num-i-1]<<'\n';
            have_result = true;
            break;
        }

    }
    if(!have_result){
        cout<<"NO RESULT\n";
    }

    return 0;
}