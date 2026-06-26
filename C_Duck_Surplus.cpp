#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> a(n);
    for(auto& x: a){
        cin>>x;
    }

    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) a[i+1]+=a[i];
    }

    cout<<a[n-1]<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}