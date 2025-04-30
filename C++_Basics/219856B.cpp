/*
 *	Author: Mr. PG
 *	Created: 30.04.2025 18:02:43 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    int pos = s.find("\\", 0);
    cout << s.substr(0, pos);
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
