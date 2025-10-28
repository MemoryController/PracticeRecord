#include<bits/stdc++.h>
using namespace std;

int num,arr[20],len_err=0,err[20];

int front_num(int x,int x_idx,int y,int y_idx){ // 如果出现截断部分相等则需要把截断部分和其他每个元素进行比较
    // 计算长度
    int x_len=0,y_len=0,tmp_x=x,tmp_y=y;
    while(tmp_x){
        x_len++;
        tmp_x = (int)(tmp_x/10);
    }
    while(tmp_y){
        y_len++;
        tmp_y = (int)(tmp_y/10);
    }
    // 判定应该返回哪个
    if(x_len==y_len){
        return max(x,y);
    }else if (x_len>y_len){
        int tmp_x = (int)(x/(int)pow(10,x_len-y_len));
        if (tmp_x>y){
            return x;
        }else if(tmp_x<y){
            return y;
        }else{
            int remain = x % (int)pow(10,x_len-y_len);
            for(int i = 0;i < num;i++){
                if(i==x_idx) continue;
                if(remain != front_num(remain,x_idx,arr[i],y_idx)){
                    return y;
                }
            }
            return x;
            
        }
    }else{
        int tmp_y = (int)(y/(int)pow(10,y_len-x_len));
        if (tmp_y>x){
            return y;
        }else if(tmp_y<x){
            return x;
        }else{
            int remain = y % (int)pow(10,y_len-x_len);
            for(int i = 0;i < num;i++){
                if(i==y_idx) continue;
                if(remain != front_num(remain,x_idx,arr[i],y_idx)){
                    return x;
                }
            }
            return y;
        }
    }
    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>num;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    // 依次找出首位最大的放前面 类似冒泡排序
    for(int i=0; i<num; i++){
        for(int j=0; j<num-1-i;j++){
            int front = front_num(arr[j],j,arr[j+1],j+1);
            if(arr[j] != front){
                arr[j] = arr[j] ^ arr[j+1];
                arr[j+1] = arr[j] ^ arr[j+1];
                arr[j] = arr[j] ^ arr[j+1];
            }

        }
    }
    // 拼接
    for(int i=0;i<num;i++){
        cout<<arr[i];
    }
    cout<<'\n';
    return 0;
}