/*
 *	Author: Mr. PG
 *	Created: 25.04.2025 02:44:29 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 3);
    cout << a[0] << " " << a[2] << endl;
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
