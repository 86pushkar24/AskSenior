/*
 *	Author: Mr. PG
 *	Created: 25.04.2025 04:04:40 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

int reverse(int n)
{
    int new_num(0);
    while (n > 0)
    {
        int lastDigit = n % 10;
        new_num = new_num * 10 + lastDigit;
        n /= 10;
    }
    return new_num;
}
bool check(int a, int b)
{
    return a == b;
}
void solve()
{
    int n;
    cin >> n;
    int ans = reverse(n);
    if (check(n, ans))
    {
        cout << ans << endl;
        cout << "YES" << endl;
    }
    else
    {
        cout << ans << endl;
        cout << "NO" << endl;
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
