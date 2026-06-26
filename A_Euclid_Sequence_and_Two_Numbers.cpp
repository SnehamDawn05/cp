#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> a(n);
    for(auto& x: a){
        cin>>x;
    }

    if(n==2){
        cout<<max(a[0],a[1])<<" "<<min(a[0],a[1])<<endl;
        return;
    }

    sort(a.rbegin(), a.rend());
    unordered_map<ll,ll> mp;
    for(int i=2;i<n;i++){
        mp[a[i]]++;
    }

    bool flag=true;

    for(int i=2;i<n;i++){
        if(a[i-1]==0){
            flag=false;
            break;
        }
        ll x=a[i-2]%a[i-1];

        if(mp.count(x)){
            a[i]=x;
            mp[x--];
            if(mp[x]==0) mp.erase(x);
        }else{
            flag=false;
            break;
        }
    }

    if(flag) cout<<a[0]<<" "<<a[1]<<endl;
    else cout<<-1<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}