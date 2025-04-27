/*
 *	Author: Mr. PG
 *	Created: 25.04.2025 04:20:10 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int sum = a + b;
    int ans(0);
    int inp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
        if (inp[i] == sum)ans = i;
    }
    cout << ans + 1 << endl;
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
