/*
*	Author: Mr. PG
*	Created: 30.04.2025 18:51:17 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int q;
    cin >> q;
    string s;
    cin >> s;
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    if (q == 1){
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            for(int j = 0; j < original.size();j++){
                if(ch == original[j]){
                    cout << key[j];
                }
            }
        }
    }
    else{
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            for (int j = 0; j < original.size(); j++)
            {
                if (ch == key[j])
                {
                    cout << original[j];
                }
            }
        }
    }
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
