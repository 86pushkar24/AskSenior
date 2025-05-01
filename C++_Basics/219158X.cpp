/*
 *	Author: Mr. PG
 *	Created: 01.05.2025 07:28:02 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int min1 = min(a, b);
    int max1 = max(a, b);
    int min2 = min(c, d);
    int max2 = max(c, d);
    // if(min1 <= max2 && min2 <= max1)cout << min2 << " " << max1;
    if (max1 < min2 || max2 < min1)
        cout << -1 << endl;
    else
        cout << max(min1, min2) << " " << min(max1, max2);
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
