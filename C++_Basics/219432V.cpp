/*
*	Author: Mr. PG
*	Created: 01.05.2025 00:01:25 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n;
    cin >> n;
    for (int i = 1; i <= 4*n; i+=4) {
        cout << i << " " << i + 1 << " " << i + 2 << " " << "PUM";
        cout << endl;
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
