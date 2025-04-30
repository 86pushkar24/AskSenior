/*
 *	Author: Mr. PG
 *	Created: 30.04.2025 17:32:00 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

bool srch(int x, vector<int> &a)
{
    int low(0), high(a.size() - 1);
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == x)
            return true;
        else if (a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    while (q--)
    {
        int x;
        cin >> x;
        // if (srch(x, a))
        if (binary_search(a.begin(), a.end(), x))
            cout << "found\n";
        else
            cout << "not found\n";
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
