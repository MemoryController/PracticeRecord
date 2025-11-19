#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e5 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

// 不能用二分！！！
int num;
ll arr[N], pre[N], ans = 0;

void solve()
{
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= num; i++)
    {
        pre[i] += pre[i - 1] + arr[i];
    }
    for (int i = 1; i <= num; i++)
    {
        pre[i] %= 7;
    }
    for (int i = 0; i <= 7; i++)
    {
        // 找第一个i和最后一个i 也得包括0
        ll l = -1, r = -1;
        bool first = 1;
        for (int j = 0; j <= num; j++)
        {
            if (pre[j] == i)
            {
                r = j;
                if (first)
                {
                    first = 0;
                    l = j;
                }
            }
        }
        ans = max(ans, r - l);
    }
    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _ = 1;
    while (_--)
    {
        solve();
    }
    return 0;
}