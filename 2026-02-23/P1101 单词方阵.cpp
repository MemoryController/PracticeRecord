#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 100 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int op[8][2] = {
    {1,0},{1,1},{-1,0},{1,-1},{-1,-1},{0,1},{0,-1},{-1,1}
};
int n;
bool vis[N][N];
string arr[N],s="yizhong";
bool word(int x,int y,int dx,int dy){
    if(x+6*dx<=0 || x+6*dx>n || y+6*dy<=0 || y+6*dy>n) return 0;
    bool ok = 1;
    for(int i=0;i<=6;i++){
        if(arr[x+i*dx][y+i*dy] != s[i]){
            ok = 0;
            break;
        }
    }
    return ok;

}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arr[i] = ' ' + arr[i];// 转换为1-base
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(arr[i][j] == 'y'){
                for(int k=0;k<8;k++){
                    if(word(i,j,op[k][0],op[k][1])){
                        for(int p=0;p<=6;p++){
                            vis[i+p*op[k][0]][j+p*op[k][1]] = 1;
                        }
                    }

                }

            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(vis[i][j]){
                cout<<arr[i][j];
            }else{
                cout<<'*';
            }
        }
        cout<<'\n';
    }

    

    

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