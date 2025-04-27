/*
 *	Author: Mr. PG
 *	Created: 25.04.2025 13:26:07 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

long long fact(long long a)
{
    if (a == 0)
        return 1;
    return a * fact(a - 1);
}

void solve()
{
    long long a;
    cin >> a;
    long long ans = fact(a);
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
