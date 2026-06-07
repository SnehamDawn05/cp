#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,k; cin>>n>>k;
    vector<ll> nums(n);

    for(ll& num: nums) cin>>num;

    if(k==1){
        cout<<0<<endl;
        return;
    }

    ll even=0;
    ll ans=LONG_MAX;

    for(ll num: nums){
        if(num%2==0) even++;

        if(num%k==0){
            ans=0;
        }

        ans=min(ans,k-num%k);
    }

    if(k==4){
        if(even>=2) ans=min(ans,0LL);
        if(even==1) ans=min(ans,1LL);
        if(even==0) ans=min(ans,2LL);
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