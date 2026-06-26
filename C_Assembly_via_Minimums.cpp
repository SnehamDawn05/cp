#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> b(n*(n-1)/2);
    for(auto& x: b) cin>>x;

    sort(b.begin(), b.end());

    vector<ll> a;

    int i=0, j=n-1;
    while(i<(n*(n-1)/2)){
        a.push_back(b[i]);
        i+=j;
        j--;
    }

    a.push_back(a[n-2]);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}