#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,m; cin>>n>>m;
    vector<ll> a(n);
    for(auto& x: a) cin>>x;

    ll len=1, cur=1;

    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]) cur++;
        else cur=1;
        len=max(len,cur);
    }

    if(len<m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}