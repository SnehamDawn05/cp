#include<bits/stdc++.h>
using namespace std;
using ll= long long;

ll gcd(ll a, ll b){
    if(a<b) swap(a,b);
    while(a!=0 && b!=0){
        a=a%b;
        swap(a,b);
    }
    return max(a,b);
}

void solve(){
    ll n,x,y; cin>>n>>x>>y;

    ll a=n/x;
    ll b=n/y;
    ll c=n/((x*y)/gcd(x,y));

    ll ans=0;

    ans+=(((a-c)*(2*n+((a-c)-1)*(-1)))/2);
    ans-=(((b-c)*(2*1+((b-c)-1)*(1)))/2);

    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}