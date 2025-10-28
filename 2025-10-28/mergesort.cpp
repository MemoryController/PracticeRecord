#include<bits/stdc++.h>
using namespace std;
int num,arr[100000];

int* merge_arr(int* arr1,int len1,int* arr2,int len2){
    //合并完成之后记得释放arr1 和 arr2的内存
    int* merged_arr = (int*)malloc(sizeof(int)*(len1+len2));
    int i=0,j=0,k=0;
    while(i<len1&&j<len2){
        if(arr1[i]<=arr2[j]){
            merged_arr[k++] = arr1[i];
            i++;
        }else{
            merged_arr[k++] = arr2[j];
            j++;
        }

    }
    for(int a1=i;a1<len1;a1++){
        merged_arr[k++] = arr1[a1];
    }
    for(int a2=j;a2<len2;a2++){
        merged_arr[k++] = arr2[a2];
    }


    free(arr1);
    free(arr2);
    return merged_arr;

}
int* merge_sort(int* splited_arr,int len){
    if(len<=1){
        return splited_arr;
    }else if (len == 2){
        if(splited_arr[0]>splited_arr[1]){
            splited_arr[0] = splited_arr[0] ^ splited_arr[1];
            splited_arr[1] = splited_arr[0] ^ splited_arr[1];
            splited_arr[0] = splited_arr[0] ^ splited_arr[1];
        }
        return splited_arr;
    }
    
    // 分割
    int len1 = (int)(len/2);
    int len2 = len-len1;
    int* arr1 = (int*)malloc(sizeof(int)*len1);
    int* arr2 = (int*)malloc(sizeof(int)*len2);
    // copy一下数组
    for(int i=0;i<len1;i++){
        arr1[i] = splited_arr[i];
    }
    for(int i=len1;i<len;i++){
        arr2[i-len1] = splited_arr[i];
    }
    // 排序 并合并 递归，总会分割到位置的
    return merge_arr(merge_sort(arr1,len1),len1,merge_sort(arr2,len2),len2);

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>num;
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    //归并排序
    int* sorted_arr = merge_sort(arr,num);
    for(int i=0; i<num; i++){
        cout<<sorted_arr[i]<<' ';
    }
    free(sorted_arr);
    
    cout<<'\n';
    return 0;
}