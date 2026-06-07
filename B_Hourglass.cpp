#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll s,k,m; cin>>s>>k>>m;
    ll t1=0, t2=0;

    while(t2<=m) t2+=k;
    t2-=k;
    if(k<s) t2+=k;
    else t2+=s;

    if(t2-m>0) cout<<t2-m<<endl;
    else cout<<0<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}