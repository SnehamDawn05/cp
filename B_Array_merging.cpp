#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> a(n), b(n);
    for(auto& x: a) cin>>x;
    for(auto& x: b) cin>>x;

    unordered_map<ll,ll> ma, mb;

    ll cur=1;
    ma[a[0]]=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            cur++;
        }else{
            cur=1;
        }
        ma[a[i]]=max(cur,ma[a[i]]);
    }

    cur=1;
    mb[b[0]]=1;
    for(int i=1;i<n;i++){
        if(b[i]==b[i-1]){
            cur++;
        }else{
            cur=1;
        }
        mb[b[i]]=max(cur,mb[b[i]]);
    }

    ll ans=1;

    for(auto& x: ma){
        if(mb.count(x.first)){
            ans=max(ans,ma[x.first]+mb[x.first]);
        }else ans=max(ans,ma[x.first]);
    }

    for(auto& x: mb){
        ans=max(ans, x.second);
    }

    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}