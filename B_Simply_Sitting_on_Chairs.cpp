#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> p(n), m(n+1,0);
    for(auto& x: p) cin>>x;

    ll ans=0;

    for(int i=0;i<n;i++){
        if(m[i+1]!=1){
            ans++;
            m[i+1]=1;
        }
        m[p[i]]=1;
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