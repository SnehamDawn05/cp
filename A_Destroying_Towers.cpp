#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> h(n);
    for(auto& x: h) cin>>x;

    ll sum=h[0];
    ll x=h[0];
    for(int i=1;i<n;i++){
        x=min(h[i],x);
        sum+=x;
    }

    cout<<sum<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}