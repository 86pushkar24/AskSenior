/*
 *	Author: Mr. PG
 *	Created: 01.05.2025 17:06:53 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;
#define int long long
void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    // for 1 based indexing
    vector<vector<int>> a(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    // using prefix sum array
    vector<vector<int>> prefix(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + a[i][j];
        }
    }
    while (q--)
    {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        // tc = o(n*m*q)
        // int sum = 0;
        // for(int i=l1;i<=l2;i++){
        //     for(int j=r1;j<=r2;j++){
        //         sum+=a[i][j];
        //     }
        // }
        // using prefix sum array
        // tc = o(n*m+q)
        int sum = prefix[l2][r2] - prefix[l1 - 1][r2] - prefix[l2][r1 - 1] + prefix[l1 - 1][r1 - 1];
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
