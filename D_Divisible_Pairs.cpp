#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,x,y; cin>>n>>x>>y;
    vector<ll> a(n);
    for(auto& p: a) cin>>p;
    
    map<pair<ll,ll>,ll> mp;

    ll ans=0;
    
    for(auto& p: a){
        ll r1=p%x, r2=p%y;
        ll t1=(x-r1)%x, t2=r2;        
        if(mp.count({t1,t2})){
            ans+=mp[{t1,t2}];
        }
        mp[{r1,r2}]++;
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