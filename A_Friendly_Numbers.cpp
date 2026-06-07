#include<bits/stdc++.h>
using namespace std;
using ll= long long;

ll d(ll y){
    ll s=0;
    while(y){
        s+=(y%10);
        y/=10;
    }
    return s;
}

void solve(){
    ll n; cin>>n;
    ll count=0;

    for(ll y=n+1;y<=n+162;y++){
        if(y-d(y)==n) count++;
    }

    cout<<count<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}