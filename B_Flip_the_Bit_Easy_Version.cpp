#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,k; cin>>n>>k;
    vector<ll> a(n);
    for(auto& x: a) cin>>x;
    cin>>k;
    k--;
    ll o=0, z=0, x=0, y=0;
    for(int i=k-1;i>=0;i--){
        if(a[i]!=a[i+1]) x++;
    }
    for(int i=k+1;i<n;i++){
        if(a[i]!=a[i-1]) y++;
    }

    ll ans=max(x,y);

    if(ans%2) cout<<ans+1<<endl;
    else cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}