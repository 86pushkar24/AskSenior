/*
 *	Author: Mr. PG
 *	Created: 25.04.2025 02:36:29 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a % b == 0 || b % a == 0)
    {
        cout << "Multiples";
    }
    else
    {
        cout << "No Multiples";
    }
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
