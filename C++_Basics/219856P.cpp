/*
*	Author: Mr. PG
*	Created: 30.04.2025 18:33:56 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

// void solve(){
//     string s;
//     getline(cin,s);
//     int cnt = 0;
//     bool flag = true;
//     for(int i = 0 ; i < s.size(); i++){
//         if (s[i] == '!' || s[i] == '.' || s[i] == '?' || s[i] == ',' || s[i] == ' '){
//             flag = true;
//         }
//         else{
//             if(flag){
//                 cnt++;
//                 flag = false;
//             }
//         }
//     }
//     cout << cnt << endl;
// }
void solve()
{
    string s;
    getline(cin, s);
    int cnt = 0;
    bool inWord = false;

    for (char c : s)
    {
        if (isalpha(c))
        {
            if (!inWord)
            {
                cnt++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    cout << cnt << '\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
