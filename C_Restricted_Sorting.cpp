#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> a(n);
    for(ll& x: a) cin>>x;

    vector<ll> b= a;
    sort(b.begin(),b.end());

    ll ans=INT_MAX;

    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            ll v= max(a[i]-b[0], b[n-1]-a[i]);
            ans=min(ans,v);
        }
    }

    if(ans==INT_MAX){
        cout<<-1<<endl;
        return;
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