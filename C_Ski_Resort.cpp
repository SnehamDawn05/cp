#include<bits/stdc++.h>
using namespace std;
using ll= long long;

ll cal(ll d, ll k){
    ll ways=0;
    for(ll i=1;i<=d;i++){
        for(ll j=i+k-1;j<=d;j++) ways++;
    }
    return ways;
}

void solve(){
    ll n,k,q; cin>>n>>k>>q;

    vector<ll> temp(n);
    for(auto& t:temp) cin>>t;

    ll d=0, ans=0;

    for(auto& t: temp){
        if(t<=q) d++;
        else{
            if(d>=k){
                ans+=cal(d,k);
            }
            d=0;
        }
    }

    if(d>=k) ans+=cal(d,k);

    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}