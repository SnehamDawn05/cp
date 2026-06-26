#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> h(n);
    for(auto& a: h) cin>>a;

    ll ma=h[0], mi=h[0];
    for(int i=1;i<n;i++){
        ma=max(ma,h[i]);
        mi=min(mi,h[i]);
    }

    cout<<ma-mi+1<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}