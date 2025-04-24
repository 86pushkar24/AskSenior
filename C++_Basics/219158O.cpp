/*
 *	Author: Mr. PG
 *	Created: 25.04.2025 03:31:57 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    if (s == '+')
        cout << (a + b);
    if (s == '-')
        cout << (a - b);
    if (s == '*')
        cout << (a * b);
    if (s == '/')
        cout << (a / b);
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
