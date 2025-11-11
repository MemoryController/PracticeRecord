#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f3f3f;
const int N = 2e5+10;
// 依旧二分 注意 二分法至少要有两个元素才能分，做个特判
unsigned long long ans=0;
int m,n,school[N],stu[N];
void solve(){
    cin>>m>>n;
    for(int i=1; i<=m; i++){
        cin>>school[i];
    }
    for(int i=1; i<=n; i++){
        cin>>stu[i];
    }
    sort(school+1,school+m+1);
    for(int i=1; i<=n; i++){
        // 用二分逐渐逼近最接近的两个位置 将比较范围缩小到l和r两个值
        if(m>1){
            int l=1,r=m;
            while(r-l != 1){
                int mid = (r+l)>>1;
                if(stu[i]-school[mid]>0){
                    l = mid;
                }else if(stu[i]-school[mid]<0){
                    r = mid;
                }else{
                    l = mid;
                    r = mid;
                    break;
                }
            }
            ans += min(abs(school[l]-stu[i]),abs(school[r]-stu[i]));
        }else{
            ans += abs(school[1] - stu[i]);
        }
        
        

    }
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _ = 1;
    //cin>>_;
    while(_--) solve();
    return 0;
}