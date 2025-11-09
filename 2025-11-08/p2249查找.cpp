#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 4e6+10;

ll arr[N];
ll length,num;
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>length>>num;
    for(ll i=1; i<=length; i++){
        cin>>arr[i];
    }
    for(ll i=1;i<=num;i++){
        ll left=1,mid,right=length,target,idx=-1;
        cin>>target;
        if(target == arr[left]){
            idx=left;
        }else if(target == arr[right]){
            idx=right;
        }else{
            while(right - left > 1){
                // 循环进行二分查找 这样只能保证有，不能保证是第一个 但是边界位置找不到
                mid = (right+left)/2;
                bool changed = false;
                if(arr[mid]>target){
                    right = mid;
                }else if(arr[mid]<target){
                    left=mid;
                }else{
                    idx = mid;
                    break;
                }
            }
        }
        
        if(idx != -1){
            //去找第一个相同的
            while(arr[idx-1] == target){
                idx--;
            }
        }
        cout<<idx<<' ';
    }
    cout<<'\n';
    



    return 0;
}