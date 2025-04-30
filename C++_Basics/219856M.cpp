/*
 *	Author: Mr. PG
 *	Created: 30.04.2025 18:21:51 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string t = "hello";
    int i(0), j(0);
    while (j < t.size() && i < s.size())
    {
        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    if (j == t.size())
        cout << "YES";
    else
        cout << "NO";
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
