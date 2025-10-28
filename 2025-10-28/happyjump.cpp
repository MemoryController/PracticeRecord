#include<bits/stdc++.h>
using namespace std;

long arr[1000],temp; //arr最后可以用来存储差值
int num;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    //读入数组 并且求出差值
    cin>>num;
    cin>>arr[0];
    for(int i=1; i<num; i++){
        cin>>arr[i];
        arr[i-1] = abs(arr[i]-arr[i-1]);
    }

    //尝试排序，但是如果找到相等的就判断为错，最大值不为num - 1也是错
    bool swaped=false,is_happy=true;
    for(int i=0; i<num-1;i++){
        swaped = false;
        for(int j=0; j<num-1-i-1; j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaped = true;
            }else if(arr[j]==arr[j+1]){
                is_happy = false;
                swaped = false; //强行结束排序
                break;
            }

        }
        if(!swaped){
            break;
        }
    }

    //如果没有重复数字，就检查最大值
    if(is_happy && arr[0] != num-1){
        is_happy = false;
    }

    if(is_happy){
        cout<<"Jolly\n";
    }else{
        cout<<"Not jolly\n";
    }
    return 0;
}