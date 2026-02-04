#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int field[N][N],dp[N][N]; // dp:下面一层的最大值和这一层相加
int r;
void solve(){
    cin>>r;
    for(int i=0; i<r; i++){
        for(int j=0; j<=i; j++){
            cin>>field[i][j];
            dp[i][j] = field[i][j];
        }
    }

    for(int i=r-2; i>=0; i--){
        for(int j=0; j<=i; j++){
            dp[i][j] += max(dp[i+1][j],dp[i+1][j+1]);
        }
    }
    cout<<dp[0][0]<<'\n';
   
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