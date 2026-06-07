#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,x,y; cin>>n>>x>>y;
    vector<ll> v(n);
    for(auto& q: v) cin>>q;

    ll mini=0, maxi=0;
    for(int i=1;i<n;i++){
        if(v[i]%x>v[mini]%x) mini=i;
        else if(v[i]%x==v[mini]%x){
            if(v[i]<v[mini]) mini=i;
        }

        ll z1=v[i]-v[i]/x*y, z2=v[maxi]-v[maxi]/x*y;
        if(z1>z2) maxi=i;
    }

    

    ll f=0;

    if(v[maxi]-v[maxi]/x*y>v[mini]%x) f=maxi;
    else f=mini;
    

    ll ans=0;
    for(int i=0;i<n;i++){
        if(i==f){
            ans+=v[i];
        }else{
            ans+=(v[i]/x*y);
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