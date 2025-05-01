/*
*	Author: Mr. PG
*	Created: 01.05.2025 16:37:10 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;

void solve(){
    int n,q;
    cin>>n>>q;
    map<int,int> mp;
    while(q--){
        int x;
        cin>>x;
        if(x==1){
            int a;
            cin>>a;
            mp[a]++;
        }
        else{
            int a;
            cin>>a;
            cout<<mp[a]<<endl;
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
