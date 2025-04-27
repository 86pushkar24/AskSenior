/*
 *	Author: Mr. PG
 *	Created: 27.04.2025 16:26:37 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

long long sum(long long k)
{
    long long ans(0);
    while (k != 0)
    {
        ans += (k % 10);
        k /= 10;
    }
    return ans;
}
void solve()
{
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += s[i] - '0';
    }
    cout << sum << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
