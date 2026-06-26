#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> h(n);
    for(auto& x: h){
        cin>>x;
    }

    vector<ll> ans(n,0);

    for(int i=0;i<n;i++){
        ll l=i-1, r=i+1;
        if(l==-1) l=n-1;
        if(r==n) r=0;
        
        vector<ll> s(n,0), p(n,0);

        s[l]=h[l]; l--; if(l==-1) l=n-1;
        p[r]=h[i]; r++; if(r==n) r=0;

        while(r!=i){
            ll x=r-1;
            if(r-1==-1) x=n-1;
            p[r]=max(p[x], h[x]);
            r++;
            if(r==n) r=0;
        }

        while(l!=i){
            ll x=l+1;
            if(l+1==n) x=0;
            s[l]=max(s[x], h[l]);
            l--;
            if(l==-1) l=n-1;
        }

        for(int j=0;j<n;j++){
            ans[i]+=min(p[j], s[j]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}