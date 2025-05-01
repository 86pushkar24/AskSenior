/*
 *	Author: Mr. PG
 *	Created: 01.05.2025 18:04:01 (GMT+5:30)
 */
#include "bits/stdc++.h"
using namespace std;

bool cmp(pair<string, int> &a, pair<string, int> &b)
{
    // if (a.second == b.second)
    // {
    //     return a.first < b.first; // small to big
    // }
    // return a.second > b.second; // big to small
    if(a.second > b.second){
        return true;
    }
    else if(a.second == b.second){
        return a.first < b.first;
    }
    return false;
}
void solve()
{
    int n;
    cin >> n;
    // vector<pair<string, int>> a(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i].first >> a[i].second;
    // }
    vector<pair<string, int>> a;
    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        a.push_back({s, x});
    }
    // as lambda function
    // sort(a.begin(), a.end(), [](pair<string, int> &a, pair<string, int> &b){
    //     if(a.second==b.second){
    //         return a.first<b.first; // small to big
    //     }
    //     return a.second>b.second; // big to small
    // });
    // as function
    sort(a.begin(),a.end(),cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }
    cout << endl;
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
