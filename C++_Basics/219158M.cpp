/*
 *	Author: Mr. PG
 *	Created: 25.04.2025 03:44:00 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    char c;
    cin >> c;
    int ascii = int(c);
    if (ascii >= 48 && ascii <= 57)
        cout << "IS DIGIT";
    if (ascii >= 65 && ascii <= 91)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL";
    }
    if (ascii >= 97 && ascii <= 122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL";
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
