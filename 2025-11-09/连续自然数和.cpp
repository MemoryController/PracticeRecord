#include<bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f3f3f3f3f;
typedef long long ll;

ll target;
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>target;

    // 使用双指针，通过比较区间内和的大小和target的关系，决定是移动左边还是右边
    ll left=1,right=2;
    while(right<target && left!=right){
        ll result = (left+right) * (right-left+1) /2;
        if(result == target){
            cout<<left<<' '<<right<<'\n';
            //达到条件之后破坏一下稳定条件
            left++;
        }else if(result>target){
            // 收窄范围
            left++;
        }else{
            // 放宽范围
            right++;
        }
    }
    
    return 0;
}