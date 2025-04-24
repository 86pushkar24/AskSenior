/*
 *	Author: Mr. PG
 *	Created: 25.04.2025 02:32:18 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

const double pi = 3.141592653;

void solve()
{
    double a;
    cin >> a;
    double ans = pi * a * a;
    cout << fixed << setprecision(9) << ans << endl;
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
