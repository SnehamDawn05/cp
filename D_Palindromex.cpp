#include<bits/stdc++.h>
using namespace std;
using ll= long long;

ll extend(vector<ll>& a, int sp, int ep){
    ll n=a.size();
    set<ll> s;
    for(int i=0;i<=n;i++) s.insert(i);
    while(sp>=0 && ep<n && a[sp]==a[ep]){
        if(s.count(a[sp])) s.erase(a[sp]);
        sp--;ep++;
    }

    return *s.begin();
}

void solve(){
    ll n; cin>>n;
    vector<ll> a(2*n);
    for(auto& x: a) cin>>x;

    ll ans=1;

    int z1=-1, z2=-1;
    for(int i=0;i<2*n;i++){
        if(z1!=-1){
            if(a[i]==0){
                z2=i;
                break;
            }
        }else{
            if(a[i]==0) z1=i;
        }
    }

    ans=max(ans,extend(a,z1,z1));
    ans=max(ans,extend(a,z2,z2));
    if((z1+z2)%2){
        ans=max(ans,extend(a,(z1+z2)/2,(z1+z2)/2+1));
    }else{
        ans=max(ans,extend(a,(z1+z2)/2,(z1+z2)/2));
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