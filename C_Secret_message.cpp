#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,k; cin>>n>>k;

    vector<string> v(k);
    for(auto& s: v) cin>>s;

    unordered_map<char,unordered_set<ll>> mp;
    map<ll,unordered_set<char>> mp1;

    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            mp[v[i][j]].insert(j);
            ll x=mp[v[i][j]].size();
            mp1[x-1].erase
        }
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}