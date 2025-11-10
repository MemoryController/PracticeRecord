#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 0x3f3f3f3f3f3f3f3f;
const int N = 2e5+10;

int n,q;
ll arr[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>q;

    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    //排序 才能二分
    sort(arr+1,arr+n+1);
    //二分两次查找区间端点下标
    for(int i=0; i<q; i++){
        ll tar_min,tar_max;
        cin>>tar_min>>tar_max;
        int l,r,start_idx,stop_idx;
        arr[n+1] = INF;
        arr[0] = -INF;

        //二分查找第一个不小于tar_min的下标 lower_bound
        l=0;r=n+1;
        while(l+1!=r){
            start_idx = (l+r)>>1;
            if(arr[start_idx]<tar_min){ //太小了 当前区间中点在目标点左边
                l = start_idx;
            }else{
                r = start_idx; //已经大于等于了 当前区间中点就是目标点或者在目标点右边
            }

        }
        start_idx = r;
        //二分查找第一个大于tar_max的下标 upper_bound
        l=0;r=n+1;
        while(l+1!=r){
            stop_idx = (l+r)>>1;
            if(arr[stop_idx]<=tar_max){
                l = stop_idx;
            }else{
                r = stop_idx;
            }

        }
        stop_idx = r;


        cout<<stop_idx-start_idx<<'\n';
    }
    

    return 0;
}