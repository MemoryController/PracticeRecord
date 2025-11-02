#include<bits/stdc++.h>
using namespace std;

int num_count,period_count,start_idx,stop_idx;
long long prefix_sum[100000],sum=0,arr[100000];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>num_count;
    for(int i=0; i<num_count; i++){
        // 输入并且求前缀和
        cin>>arr[i];
        sum += arr[i];
        prefix_sum[i] = sum;
    }

    cin>>period_count;
    for(int i=0; i<period_count; i++){
        cin>>start_idx>>stop_idx;
        stop_idx--;
        start_idx -= 2;
        if(start_idx < 0){
            cout<<prefix_sum[stop_idx]<<'\n';
        }else{
            cout<<prefix_sum[stop_idx]-prefix_sum[start_idx]<<'\n';
        }
    }




    return 0;
}