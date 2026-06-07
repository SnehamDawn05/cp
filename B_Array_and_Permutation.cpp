#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> p(n), a(n);
    for(auto& x: p) cin>>x;
    for(auto& x: a) cin>>x;

    if(a[0]==p[0] || a[0]==p[1] || a[0]==a[1]){}
    else{
        cout<<"NO"<<endl;
        return;
    }

    for(int i=1;i<n-1;i++){
        if(a[i]==p[i] || a[i]==p[i-1] || a[i]==a[i-1] || a[i]==p[i+1] || a[i]==a[i+1]){}
        else{
            cout<<"NO"<<endl;
            return;
        }
    }

    if(a[n-1]==p[n-1] || a[n-1]==p[n-2] || a[n-1]==a[n-2]){}
    else{
        cout<<"NO"<<endl;
        return;
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