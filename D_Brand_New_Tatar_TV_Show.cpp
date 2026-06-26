#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,k; cin>>n>>k;
    vector<ll> a(n);
    for(auto& x: a) cin>>x;

    unordered_map<ll,ll> mp;
    vector<ll> u;
    

    sort(a.rbegin(), a.rend());

    u.push_back(a[0]);

    for(int i=0;i<n;i++){
        mp[a[i]]++;
        if(i==0)continue;
        if(a[i-1]!=a[i]) u.push_back(a[i]);
    }

    for(int i=0;i<u.size();i++){
        ll y=u[i];
        ll cnt=mp[u[i]];
        if(cnt%2==0){
            cout<<"YES"<<endl;
            return;
        }else{
            if(i<u.size()-1){
                ll x=u[i+1];
                if(x+k>=y){
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
    }

    cout<<"NO"<<endl;
    

    
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}