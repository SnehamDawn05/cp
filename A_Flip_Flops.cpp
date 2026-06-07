#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,c,k; cin>>n>>c>>k;
    vector<ll> a(n,0);
    for(auto& x: a) cin>>x;

    sort(a.begin(), a.end());

    for(int i=0;i<n;i++){
        if(a[i]>c) break;
        ll diff=c-a[i];
        if(k>diff){
            a[i]+=diff;
            k-=diff;
        }else{
            a[i]+=k;
            k=0;
        }
        c+=a[i];
    }

    cout<<c<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}