/*
 *	Author: Mr. PG
 *	Created: 26.04.2025 18:18:35 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int k, s;
    cin >> k >> s;
    int ans(0);
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int z = s - i - j;
            if ((z >= 0 && z <= k) && (i + j + z == s))
                ans++;
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
