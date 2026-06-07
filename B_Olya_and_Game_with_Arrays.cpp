#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    
    vector<priority_queue<ll>> v(n);
    
    ll unimin=LONG_MAX;
    
    for(int i=0;i<n;i++){
        ll m; cin>>m;
        for(int j=0;j<m;j++){
            ll a;cin>>a;
            unimin=min(unimin,a);
            v[i].push(a);
            if(v[i].size()>2) v[i].pop(); 
        } 
    }

    ll second=LONG_MAX;

    ll ans=0;

    for(int i=0;i<n;i++){
        ans+=v[i].top();
        second=min(second,v[i].top());
    }

    ans-=second; ans+=unimin;

    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}