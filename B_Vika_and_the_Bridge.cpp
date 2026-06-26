#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,k; cin>>n>>k;
    vector<ll> b(n);

    for(auto& x: b) cin>>x;

    vector<vector<ll>> gap(k+1, {0,0,-1}); //maxStep,2ndMaxSep,last

    for(int i=0;i<n;i++){
        ll j=b[i];
        if(i-gap[j][2]-1>=gap[j][0]){
            gap[j][1]=gap[j][0];
            gap[j][0]=i-gap[j][2]-1;
        }else if(i-gap[j][2]-1>=gap[j][1]){
            gap[j][1]=i-gap[j][2]-1;
        }
        gap[j][2]=i;
    }

    for(int j=0;j<=k;j++){
        ll i=n;
        if(i-gap[j][2]-1>=gap[j][0]){
            gap[j][1]=gap[j][0];
            gap[j][0]=i-gap[j][2]-1;
        }else if(i-gap[j][2]-1>=gap[j][1]){
            gap[j][1]=i-gap[j][2]-1;
        }
        gap[j][2]=i;
    }

    ll ans=n;

    for(int i=1;i<=k;i++){
        ans=min(ans,max(gap[i][0]/2,gap[i][1]));
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