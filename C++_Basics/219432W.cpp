/*
 *	Author: Mr. PG
 *	Created: 25.04.2025 13:43:33 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        space--;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    space = 0;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= space; j++)
        { 
            cout << " ";
        }
        space++;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
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
