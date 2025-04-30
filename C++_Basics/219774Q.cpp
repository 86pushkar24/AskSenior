/*
 *	Author: Mr. PG
 *	Created: 30.04.2025 15:15:16 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 1, ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            cnt++;
        else
        {
            ans += cnt * (cnt + 1) / 2;
            cnt = 1;
        }
    }
    ans += cnt * (cnt + 1) / 2;
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
