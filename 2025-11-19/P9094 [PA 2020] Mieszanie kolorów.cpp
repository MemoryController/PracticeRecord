#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e6 + 10;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;

ll r_arr[N], y_arr[N], b_arr[N], diff_r[N], diff_y[N], diff_b[N];
ll ans = 0;
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        switch (k)
        {
        case 1:
            diff_y[l]++;
            diff_y[r + 1]--;
            break;
        case 2:
            diff_b[l]++;
            diff_b[r + 1]--;
            break;
        case 3:
            diff_r[l]++;
            diff_r[r + 1]--;
            break;
        default:
            break;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        r_arr[i] += r_arr[i - 1] + diff_r[i];
        y_arr[i] += y_arr[i - 1] + diff_y[i];
        b_arr[i] += b_arr[i - 1] + diff_b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (r_arr[i] == 0 && y_arr[i] != 0 && b_arr[i] != 0)
        {
            ans++;
        }
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