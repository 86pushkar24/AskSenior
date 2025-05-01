/*
 *	Author: Mr. PG
 *	Created: 01.05.2025 17:01:10 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;
#define int long long
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    // using prefix sum array
    vector<int> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        // tc = o(n*q)
        int sum = 0;
        // for(int i=l;i<=r;i++){
        //     sum+=a[i];
        // }
        // using prefix sum array
        // tc = o(n+q)
        sum = prefix[r] - prefix[l - 1];
        cout << sum << endl;
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
