/*
 *	Author: Mr. PG
 *	Created: 01.05.2025 16:39:32 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    for (int i = -m; i <= m; i++)
    {
        if (a.find(i) == a.end())
        {
            cout << i << endl;
            return;
        }
    }
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
