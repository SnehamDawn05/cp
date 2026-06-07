#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> a(n);
    for(auto& x: a) cin>>x;
    ll k=0;

    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            k=max(k,a[i-1]-a[i]);
        }
    }

    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]) a[i]+=k;
    }

    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}