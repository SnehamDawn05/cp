#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> a(n), b(n);
    for(auto& x: a) cin>>x;
    for(auto& x: b) cin>>x;

    ll ans=0;

    for(int i=0;i<n;i++){
        if(a[i]<=b[i]) continue;
        int idx=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<=b[i]){
                idx=j;
                break;
            }
        }
        if(idx==i){
            cout<<-1<<endl;
            return;
        }

        for(int j=idx;j>i;j--){
            swap(a[j],a[j-1]);
        }

        ans+=(idx-i);
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