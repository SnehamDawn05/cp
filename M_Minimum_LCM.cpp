#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    
    ll ansa=1, ansb=n-1;

    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            ansa=max(ansa,n/i);
        }
    }

    ansb=n-ansa;

    if(ansa>ansb) swap(ansa,ansb);

    cout<<ansa<<" "<<ansb<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}