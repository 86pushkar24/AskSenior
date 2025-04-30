/*
 *	Author: Mr. PG
 *	Created: 30.04.2025 18:06:49 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    // method -1 use for loops and comapre letter by letter
    // method - 2 use stl 
    if(lexicographical_compare(s.begin(),s.end(),t.begin(),t.end())){
        cout << s << endl;
    }
    else{
        cout << t << endl;
    }
    // method -3
    if (s > t) // compares lexicographically
        cout << t;
    else cout << s;
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
