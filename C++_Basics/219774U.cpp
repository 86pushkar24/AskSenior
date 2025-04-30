/*
 *	Author: Mr. PG
 *	Created: 30.04.2025 13:35:19 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i(0), j(0);
    while (j < m && i < n)
    {
        if (b[j] != a[i])
        {
            i++;
        }
        else
        {
            i++;
            j++;
        }
    }
    if (j < m)
        cout << "NO\n";
    else
        cout << "YES\n";
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
