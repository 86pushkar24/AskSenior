#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<long long> v(n + 1, 0);      // 1-based indexing
    vector<long long> prefix(n + 1, 0); // prefix[0] = 0

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        prefix[i] = prefix[i - 1] + v[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
