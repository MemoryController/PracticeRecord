#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+10;

int n,k,l=1,r=0,mid;
int periods[N][2];
bool check(int len){
    // 判定某个边长是否能用
    int rest = k;//还剩几个人没拿到
    for(int i=1; i<=n; i++){
        rest -= (periods[i][0]/len) * (periods[i][1]/len);        
    }
    if(rest<=0){
        return true;
    }else{
        return false;
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>>periods[i][0]>>periods[i][1];
        r = max(r,periods[i][0]);
        r = max(r,periods[i][1]);
    }
    r++; //区间范围需要更宽泛一点，避免有正确答案在端点处没有遍历到
    //二分 合格的归左 最后取左
    while(r-l!=1){
        mid = (r+l)>>1;
        if(check(mid)){
            l=mid;
        }else{
            r=mid;
        }
    }
    cout<<l<<'\n';



    return 0;
}