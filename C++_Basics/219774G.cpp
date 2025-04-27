/*
 *	Author: Mr. PG
 *	Created: 27.04.2025 16:14:39 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (a[left] == a[right])
        {
            left++, right--;
            continue;
        }
        else
            cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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
