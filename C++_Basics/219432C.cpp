/*
 *	Author: Mr. PG
 *	Created: 25.04.2025 03:49:00 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int size;
    cin >> size;
    int input_array[size];
    int cnt_even(0), cnt_odd(0), cnt_pos(0), cnt_neg(0);
    for (int i = 0; i < size; i++)
    {
        cin >> input_array[i];
        if (input_array[i] % 2 == 0)
            cnt_even++;
        if (input_array[i] % 2 != 0)
            cnt_odd++;
        if (input_array[i] > 0)
            cnt_pos++;
        if (input_array[i] < 0)
            cnt_neg++;
    }
    cout << "Even: " << cnt_even << endl;
    cout << "Odd: " << cnt_odd << endl;
    cout << "Positive: " << cnt_pos << endl;
    cout << "Negative: " << cnt_neg << endl;
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
