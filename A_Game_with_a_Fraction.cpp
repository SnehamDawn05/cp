#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll p,q; cin>>p>>q;

    if(p<q && 3*p>=2*q) cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}