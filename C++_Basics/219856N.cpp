/*
 *	Author: Mr. PG
 *	Created: 30.04.2025 18:45:42 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt(0);
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            cnt++;
    }
    cout << n - cnt << endl;
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
