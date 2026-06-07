#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,w; cin>>n>>w;

    ll x=n/w;
    ll y=x*(w-1);
    ll z=y+n%w;
    cout<<z<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}