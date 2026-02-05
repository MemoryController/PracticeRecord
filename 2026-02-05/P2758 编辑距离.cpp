#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 2e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int dp[N][N]; // dp[i][j]:A的前i个变到B的前j个需要的步骤数
string a,b;
void solve(){
    cin>>a>>b;
    a = ' ' + a; b = ' ' + b; // 变成1-base
    // 初始化dp数组 任何字符串变成空或者空变成任何只需要插入或者删除若干次
    for(int i=0; i<a.length(); i++){
        dp[i][0] = i;
    }
    for(int j=0; j<b.length(); j++){
        dp[0][j] = j;
    }
    // 从长度1开始找
    for(int i=1; i<a.length(); i++){
        for(int j=1; j<b.length(); j++){
            // 如果是相同的，那就不操作和减少一个字符的情况相同
            if(a[i] == b[j]){
                dp[i][j] = dp[i-1][j-1];
                continue;
            }
            int ins=0,del=0,alt=0; // 对比三种方法的消耗
            ins = dp[i][j-1] + 1; // 说明A的前i个变换到和B的前j-1个相同了 加一个即可
            del = dp[i-1][j] + 1;
            alt = dp[i-1][j-1] + 1;
            dp[i][j] = min(ins,min(del,alt));
        }
    }
    cout<<dp[a.length()-1][b.length()-1]<<'\n';


   
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _ = 1;
    // cin>>_;
    while (_--)
    {
        solve();
    }
    return 0;
}