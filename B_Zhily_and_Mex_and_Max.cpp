#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    unordered_map<ll,ll> mp;
    ll maxi=0;
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        mp[x]++;
        maxi=max(maxi, x);
    }

    if(maxi==0){
        cout<<n<<endl;
        return;
    }

    if(!mp.count(0)){
        cout<<maxi*n<<endl;
        return;
    }

    ll val=0;
    vector<ll> v;
    v.push_back(maxi);

    while(true){
        if(mp.count(val)){
            v.push_back(val);
            mp[val]--;
            if(mp[val]==0) mp.erase(val);
            val++;
        }else{
            break;
        }
    }

    ll sum=maxi*n; ll mex=0;

    for(int i=1;i<n;i++){
        if(i<v.size()){
            if(mex==v[i]) mex++;
            if(mex==v[0]) mex++;
        }
        
        sum+=mex;
    }

    cout<<sum<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}