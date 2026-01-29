#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e3 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int op[8][2] = {{1,0},{1,-1},{1,1},{0,1},{0,-1},{-1,1},{-1,0},{-1,-1}};
char field[101][101],target[]="yizhong";
bool vis[101][101];
int n;

bool search(int dep,int x,int y,int delta_x,int delta_y){
    if(target[dep]!=field[x][y]){
        return 0;
    }
    if(dep==6){
        return 1;
    }
    // 处理越界
    if(x+delta_x<0 || x+delta_x>=n || y+delta_y<0 || y+delta_y>=n) return 0;
    return search(dep+1,x+delta_x,y+delta_y,delta_x,delta_y);
}

void solve(){
    vector<pii> arr;
    cin>>n;

    // for(int i=0; i<n; i++){
    //     cin.get(); // 读掉换行符
    //     for(int j=0; j<n; j++){
    //         field[i][j] = cin.get();
    //         if(field[i][j]=='y'){
    //             // 标记为可用点
    //             pii poi;poi.first=i;poi.second=j;
    //             arr.push_back(poi);
    //         }
    //     }
    // }
    string tmp;
    for(int i=0; i<n; i++){
        cin>>tmp;
        for(int j=0;j<n;j++){
            field[i][j] = tmp[j];
            if(field[i][j]=='y'){
                // 标记为可用点
                pii poi;poi.first=i;poi.second=j;
                arr.push_back(poi);
            }
        }
    }
    while (!arr.empty()){
        auto [x,y] = arr.back(); arr.pop_back();
        for(int k=0;k<8;k++){
            if(search(0,x,y,op[k][0],op[k][1])){
                // 这条路是对的 则标记
                for(int i=0; i<7; i++){
                    vis[x+i*op[k][0]][y+i*op[k][1]] = 1;
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(vis[i][j]){
                cout<<field[i][j];
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