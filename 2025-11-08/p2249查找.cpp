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
        while (left < right) {
            //“第一次出现的位置”就等价于“第一个大于等于目标值且等于目标值的元素下标”
            mid = left + ((right - left) >> 1);
            if (arr[mid] >= target) right = mid;
            else left = mid + 1;
        }
        if (arr[left] == target) idx = left;
        cout<<idx<<' ';
    }
    cout<<'\n';
    return 0;
}