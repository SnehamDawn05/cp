#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,m,l; cin>>n>>m>>l;
    vector<ll> a(n);
    for(auto& x: a) cin>>x;

    if(m==1){
        cout<<l-a[n-1]<<endl;
        return;
    }

    if(n==1){
        cout<<(a[0]/2)+(l-a[0])<<endl;
        return;
    }

    ll x=0;
    x=a[0]/2;

    for(int i=1;i<n;i++){
        ll t=a[i]-a[1-1];
        if(x>=t){
            x=t;
        }else{
            t=t-x;
            x=x+t/2;
        }
    }

    cout<<x+(l-a[n-1])<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}