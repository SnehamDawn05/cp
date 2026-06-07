#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void print(vector<ll>& ans){
    for(ll x: ans) cout<<x<<" ";
    cout<<endl;
}

void solve(){
    ll n,k,b,s; cin>>n>>k>>b>>s;
    
    if(s<b*k || s>b*k+(k-1)*n){
        cout<<-1<<endl;
        return;
    }
    
    vector<ll> ans(n);
    ans[n-1]=k*b;
    s-=k*b;

    int i=n-1;
    while(s>0 && i>=0){
        ans[i]+=min(k-1,s);
        s-=min(k-1,s);
        i--;
    }
    print(ans);
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}