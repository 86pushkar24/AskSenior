/*
 *	Author: Mr. PG
 *	Created: 30.04.2025 17:27:40 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    x--, y--;
    bool ans = true;
    if (x > 0 && a[x - 1][y] == '.')
        ans = false;
    if (y > 0 && a[x][y - 1] == '.')
        ans = false;
    if (x < n - 1 && a[x + 1][y] == '.')
        ans = false;
    if (y < m - 1 && a[x][y + 1] == '.')
        ans = false;
    if ((x > 0 && y > 0) && a[x - 1][y - 1] == '.')
        ans = false;
    if ((x > 0 && y < m - 1) && a[x - 1][y + 1] == '.')
        ans = false;
    if ((x < n - 1 && y > 0) && a[x + 1][y - 1] == '.')
        ans = false;
    if ((x < n - 1 && y < m - 1) && a[x + 1][y + 1] == '.')
        ans = false;
    if (ans)
        cout << "yes";
    else
        cout << "no";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
