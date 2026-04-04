#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 1e4 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

int n;
vector<int> s = vector<int>();
vector<int> result[N];
int ans = 0;
// dfs 剪枝？
void dfs(int num,int sum){
    s.push_back(num);
    sum += num;
    if(s.size()==10){
        if(sum==n){
            for(int i:s){
                result[ans].push_back(i);
            }
            ans++;
        }

        s.pop_back(); // 回溯一定要完整
        return;
    }
    for(int i=1;i<=3;i++){

        if(sum+i<=n)dfs(i,sum);

    }
    s.pop_back();
}

void solve(){
    cin>>n;
    if(n<10 || n>30){
        cout<<"0\n";
        return;
    }
    dfs(1,0);dfs(2,0);dfs(3,0);
    cout<<ans<<'\n';
    for(int i=0;i<ans;i++){
        for(int a:result[i]){
            cout<<a<<' ';
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