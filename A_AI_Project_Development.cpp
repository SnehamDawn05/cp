#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,x,y,z; cin>>n>>x>>y>>z;

    ll a1=(n+x+y-1)/(x+y);

    ll a2=n;
    if((n/x)>z){
        a2=((n-x*z)+(x+10*y)-1)/(x+10*y)+z;
    }

    cout<<min(a1,a2)<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}