#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll a,b,x; cin>>a>>b>>x;

    if(a==b){
        cout<<0<<endl;
        return;
    }

    ll ans=abs(a-b);

    ll cnt=0;

    while(a || b){
        if(a<b) swap(a,b);
        a=a/x;
        cnt++;
        ans=min(ans, abs(a-b)+cnt);
    }

    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}