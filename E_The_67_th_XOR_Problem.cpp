#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> a(n);
    for(auto& x: a) cin>>x;

    ll ans=0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            ans=max(ans,a[i]^a[j]);
        }
    }

    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}