#include "bits/stdc++.h"
using namespace std;

struct Friend
{
    string name;
    int a, b, c, d, total;
    void sum()
    {
        total = a + b + c + d;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<Friend> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].a >> a[i].b >> a[i].c >> a[i].d;
        a[i].sum();
    }
    sort(a.begin(), a.end(), [](Friend &a, Friend &b)
         {
             if (a.total == b.total)
             {
                 return a.name < b.name; // small to big
             }
             return a.total > b.total; // big to small
         });
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].total << " " << a[i].a << " " << a[i].b << " " << a[i].c << " " << a[i].d << " " << endl;
    }
}