#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e4 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;


// 直接BFS找到对应的点的时候 就直接是最小步数
int n,a,b;
ll op[205],poi[205]; // 注意和溢位
bool vis[205];
void solve(){
    cin>>n>>a>>b;
    for(int i=1; i<=n; i++){
        cin>>op[i];
    }
    for(int i=1; i<=n; i++){
        poi[i] = -1;
    }
    queue<int> q;
    q.push(a);
    vis[a] = 1; // 一定要记得对起点特别处理
    poi[a] = 0;

    while(q.size()){
        int now = q.front();
        q.pop();
        // 两种方向
        int down = now - op[now];
        if(down>=1&&down<=n && !vis[down]){//检查是否越界或重复
            q.push(down);
            vis[down] = 1;
            poi[down] = poi[now] + 1;

        }
        int up = now + op[now];
        if(up>=1&&up<=n && !vis[up]){
            q.push(up);
            vis[up] = 1;
            poi[up] = poi[now] + 1;

        }
    }
    
    cout<<poi[b]<<'\n';
    
    


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