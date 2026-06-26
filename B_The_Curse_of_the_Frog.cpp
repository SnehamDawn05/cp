#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,x; cin>>n>>x;

    vector<vector<ll>> jump(n,vector<ll>(3,0));

    for(auto& v: jump){
        cin>>v[0]>>v[1]>>v[2];
    }

    ll m=-1e18, r=0;

    for(auto& v: jump){
        ll a=v[0], b=v[1], c=v[2];
        m=max(m,a*b-c);
        r+=a*(b-1);
    }
    x-=r;

    if(x<=0) cout<<0<<endl;
    else if(m<=0) cout<<-1<<endl;
    else cout<<(x+m-1)/m<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}