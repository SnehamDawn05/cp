#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> a(n);
    for(auto& x: a) cin>>x;

    ll ans=562949953421312;

    for(int i=1;i<=64;i++){
        ll k=1LL<<i;
        unordered_set<ll> s;
        for(int i=0;i<n;i++){
            s.insert(a[i]%k);
        }
        if(s.size()==2){
            ans=k;
            break;
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