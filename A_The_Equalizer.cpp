#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n, k; cin>>n>>k;
    vector<int> a(n);
    ll sum=0;
    for(auto& x: a){
        cin>>x;
        sum+=x;
    }
    if(sum%2){
        cout<<"YES"<<endl;
        return;
    }
    if((k*n)%2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}