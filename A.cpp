#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n, k; cin>>n>>k;
    vector<int> a(n);
    for(auto& x: a) cin>>x;
    if(k*n) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}