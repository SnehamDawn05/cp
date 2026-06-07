#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> a(n);
    for(auto& x: a) cin>>x;

    for(int i=0;i<n;i++){
        ll g=0, l=0;
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) l++;
            if(a[i]<a[j]) g++;
        }
        cout<<max(g,l)<<" ";
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