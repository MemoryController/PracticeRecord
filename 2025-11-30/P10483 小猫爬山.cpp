#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e4 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

vector<int> clash,car;
ll n,w;
ll ans=INF;
// 树的每一层代表处理一个clash
void dfs(ll dep){
    if(car.size()>=ans){
        return; // 不是更优解就可以去掉了
    }
    if(dep==n+1){
        // 到底了
        ans = min(ans,(ll)car.size());
        return;
    }
    for(int i=0; i<car.size(); i++){
        // 遍历每个车 看看有没有足够空位
        if(car[i] + clash[dep-1] > w){ // 不行就看下一辆
            continue;
        }
        car[i] += clash[dep-1];
        dfs(dep+1); // 进下一层
        car[i] -= clash[dep-1];
    }
    // 再试试在这里加一辆车能不能获得更好的效果
    car.push_back(clash[dep-1]);
    dfs(dep+1);
    car.pop_back();
    
}

void solve(){
    cin>>n>>w;
    for(int _=0;_<n;_++){
        ll tmp;
        cin>>tmp;
        clash.push_back(tmp);
    }
    dfs(1);
    cout<<ans<<'\n';

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