/*
 *	Author: Mr. PG
 *	Created: 30.04.2025 23:44:54 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

void build(string str, string s)
{
    int pos = s.find(str);
    int posEqualTo = s.find("=", pos + 1);
    int posAnd = s.find("&", pos + 1);
    cout << str << ": " << s.substr(posEqualTo + 1, posAnd - posEqualTo - 1) << endl;
}
void solve()
{
    string s;
    cin >> s;
    s += '&';
    build("username", s);
    build("pwd", s);
    build("profile", s);
    build("role", s);
    build("key", s);
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
