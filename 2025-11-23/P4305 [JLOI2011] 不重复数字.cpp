#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e4 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

void solve(){
    int num;
    cin>>num;

    vector<ll> ans; // 保证输出顺序
    set<ll> st; // 保证唯一性
    for(int i=0; i<num; i++){
        ll tmp;
        cin>>tmp;
        if(st.find(tmp) == st.end()){ // find如果找到了就是对应元素位置的迭代器 如果没找到就返回st.end()
            st.insert(tmp);
            ans.push_back(tmp);
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<' ';
    }
    cout<<'\n';
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _ = 1;
    cin>>_;
    while (_--)
    {
        solve();
    }
    return 0;
}