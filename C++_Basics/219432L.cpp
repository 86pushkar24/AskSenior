/*
 *	Author: Mr. PG
 *	Created: 25.04.2025 04:10:36 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;
int gcd(int a , int b){
    if(b % a == 0)return a;
    return gcd(b % a, a);
}
void solve()
{
    int a, b;
    cin >> a >> b;  
    if(a > b)swap(a, b);
    // cout << (__gcd(a, b)) << endl;
    cout << (gcd(a, b)) << endl;
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
