#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> nums(n);
    for(auto& num: nums) cin>>num;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((nums[j]%nums[i])%2==0){
                cout<<nums[i]<<" "<<nums[j]<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
}

int main(){
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}