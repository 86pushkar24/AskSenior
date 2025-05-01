/*
*	Author: Mr. PG
*	Created: 01.05.2025 16:45:02 (GMT+5:30)
*/
#include "bits/stdc++.h"
using namespace std;
#define int long long
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    // using difference array
    vector<int> diff(n+2,0);
    while(q--){
        int l,r,x;
        cin>>l>>r>>x;
        // l--;r--;
        // tc = o(n*q)
        // for(int i=l;i<=r;i++){
        //     a[i]+=x;
        // }
        // using difference array
        // tc = o(n+q)
        diff[l]+=x;
        diff[r+1]-=x;
    }
    // now we need to find the prefix sum of diff array
    for(int i=1;i<=n;i++){
        diff[i]+=diff[i-1];
    }
    // now we need to add the diff array to the original array
    for(int i=1;i<=n;i++){
        a[i]+=diff[i];
    }
    // now we need to print the array
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
