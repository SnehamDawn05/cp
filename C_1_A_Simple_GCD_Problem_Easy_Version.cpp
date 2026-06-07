#include<bits/stdc++.h>
using namespace std;
using ll= long long;

ll gcd(ll a, ll b){
    if(b>a) swap(a,b);
    while(a && b){
        a=a%b;
        swap(a,b);
    }
    return max(a,b);
}

void solve(){
    ll n; cin>>n;
    vector<ll> a(n), b(n);

    vector<vector<ll>> g(n);

    for(auto& x: a) cin>>x;
    for(auto& y: b) cin>>y;

    for(int i=0;i<n-1;i++){
        g[i].push_back(gcd(a[i],a[i+1]));
        g[i+1].push_back(gcd(a[i],a[i+1]));
    }

    ll ans=0;

    for(int i=0;i<n;i++){
        ll l=g[i][0];
        for(int j=1;j<g[i].size();j++){
            l=lcm(l,g[i][j]);
        }
        if(l<a[i]) ans++;
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