#include<bits/stdc++.h>
using namespace std;

int reverse_arr[1000000],length=0,a,b,target_arr[1000000],tar_length = 0;

// 生成长度为 length 的奇数回文数并且填入数组
void reverse_generator(int len){
    int base_num_length = ceil((double)len/2.0); // 注意浮点数精度
    if(len == 1){
        for(int i = 1;i<=9;i+=2){
            reverse_arr[length++] = i;
        }
    }else if(len == 2){
        for(int i = 1;i<=9;i+=2){
            reverse_arr[length++] = 11*i;
        }
    }else{
        for(int i = 1;
        i<=(pow(10,base_num_length)-1);
        i+=2){
            int target_num = i;
            int temp_i = i;
            // 拼出这个回文数
            for(int j = 1; j <= len - base_num_length; j++){
                target_num += (temp_i % 10)*(int)pow(10,len-j);
                temp_i = (int)(temp_i / 10);
            }
            // 塞进数组
            reverse_arr[length++] = target_num;
        }
    }

}

bool isprime(int n){
    if (n==2) return true;
    if (n<2) return false;
    if (n%2 == 0) return false;
    for (int i = 3; i*i <= n; i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int cal_num_length(int n){
    int len = 0;
    while (n){
        // 只要不为0 就继续整除
        n = (int)(n/10);
        len++;
    }
    return len;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> a >> b;
    // 先生成一组回文数 再进行筛选
    for(int i = cal_num_length(a); i<=cal_num_length(b); i++){
        reverse_generator(i);
    }
    for(int i = 0; i<length; i++){
        if(reverse_arr[i]>=a && reverse_arr[i]<=b && isprime(reverse_arr[i])){
            target_arr[tar_length++] = reverse_arr[i];
        }
    }
    // 排序后输出 升序
    bool swaped = false;
    for(int i = 0; i<tar_length; i++){
        swaped = false;
        for(int j = 0; j < tar_length-i-1; j++){
            if(target_arr[j+1]<target_arr[j]){
                int temp = target_arr[j];
                target_arr[j] = target_arr[j+1];
                target_arr[j+1] = temp;
                swaped = true;
            }

        }
        if(!swaped){
            break;
        }
    }
    for(int i = 0; i<tar_length; i++){
        cout<<target_arr[i]<<'\n';
    }
    return 0;
}