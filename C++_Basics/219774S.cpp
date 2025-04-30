/*
 *	Author: Mr. PG
 *	Created: 29.04.2025 17:52:59 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    long long n, m;
    cin >> n >> m;
    // vector<vector<long long>> v(n, vector<long long>(m));
    long long v[n][m];
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    long long x;
    cin >> x;
    bool ans = false;
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            if (v[i][j] == x)
            {
                ans = true;
                // break;
            }
        }
    }
    cout << (ans ? "will not take number" : "will take number");
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
