#include<bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e6+10;

int stu_num,change_num;
int score[N],diff[N],ans=INF;

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    cin>>stu_num>>change_num;
    for(int i=1; i<=stu_num; i++){
        cin >> score[i]; // 读入初始值
    }
    for(int i=1; i<=stu_num; i++){
        //做差分
        diff[i] = score[i] - score[i-1];
    }
    // 对差分数组进行修改
    for(int i=0; i<change_num; i++){
        int x,y,z;
        cin>>x>>y>>z;
        diff[x] += z;
        diff[y+1] -=z;
    }
    // 还原数组
    for(int i=1; i<=stu_num; i++){
        score[i] = diff[i] + score[i-1];
    }
    // 找最小值
    for(int i=1; i<=stu_num; i++){
        ans = min(ans, score[i]);
    }

    cout<<ans<<'\n';


    return 0;
}