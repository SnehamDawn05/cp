#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<int> nums(n);
    for(auto& num: nums) cin>>num;
    int i=0, j=1;

    ll ans=0;
    while(j<n){
        if(nums[i]>nums[j]){
            ans++;
            j++;
        }else{
            i=j;
            j++;
        }
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

