#include<bits/stdc++.h>
using namespace std;
using ll= long long;

ll gcd(ll a, ll b){
    if(a<b) swap(a,b);
    while(a && b){
        a=a%b;
        swap(a,b);
    }
    return max(a,b);
}

void solve(){
    ll w,h,d,n; cin>>w>>h>>d>>n;

    ll x= gcd(w,n);
    n/=x;

    ll y= gcd(h,n);
    n/=y;

    ll z= gcd(d,n);
    n/=z;

    if(n==1) cout<<x-1<<" "<<y-1<<" "<<z-1<<endl;
    else cout<<-1<<endl;
}

int main(){
    int t; t=1;
    while(t--){
        solve();
    }
    return 0;
}