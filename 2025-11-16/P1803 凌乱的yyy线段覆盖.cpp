#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e6+10;
typedef pair<int,int> pii;

int n,ans=0;
pii game[N];
// 早结束就能参加更多 做个pair结束时间是主键排序 然后依次判断每个比赛能不能参加（在上一个参加的比赛结束之后）
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        int s,e;
        cin>>s>>e;
        game[i] = pii(e,s);
    }
    sort(game+1,game+1+n);
    int last_end = 0;
    for(int i=1;i<=n;i++){
        if(game[i].second>=last_end){
            ans++;
            last_end = game[i].first;
        }
    }
    cout<<ans<<'\n';


}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int _=1;
    while(_--){
        solve();
    }
    return 0;
}