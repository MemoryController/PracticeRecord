#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll MOD = 998244353;
const int N = 3e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

// 60%得分做法
void solve(){
    vector<int> arr;
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    
    while(k--){
        // 将最大的换到前面来就停下
        int win,lose;
        if(arr[0]>arr[1]){
            win=arr[0],lose=arr[1];
            arr.erase(arr.begin()+1);
            arr.push_back(lose);
        }else{
            win=arr[1],lose=arr[0];
            arr.erase(arr.begin());
            arr.push_back(lose);
        }
        if(win==n) break;
    }
    if(k>0){
        if(n>2) k = k%(n-1);
        while(k--){
            int lose = arr[1];
            arr.erase(arr.begin()+1);
            arr.push_back(lose);   
        }

    }

    for(int i : arr){
        cout<<i<<' ';
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