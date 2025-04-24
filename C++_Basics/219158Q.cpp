/*
*	Author: Mr. PG
*	Created: 25.04.2025 02:59:43 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    double a , b;
    cin >> a >> b;
    if(a == 0 && b == 0)cout << "Origem";
    else if(b == 0)cout << "Eixo X";
    else if(a == 0)cout << "Eixo Y";
    else if(a > 0 && b > 0) cout << "Q1";
    else if(a < 0 && b > 0) cout << "Q2";
    else if(a < 0 && b < 0) cout << "Q3";
    else if(a > 0 && b < 0) cout << "Q4";
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
