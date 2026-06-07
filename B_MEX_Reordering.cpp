#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> nums(n);
    for(auto& num: nums) cin>>num;

    sort(nums.begin(), nums.end());

    ll mex1=0, mex2=0;

    for(int i=0;i<n;i++){
        if(nums[i]==mex2) mex2++;
    }

    for(int i=0;i<n-1;i++){
        if(nums[i]==mex1) mex1=nums[i]+1;

        if(nums[i]==0 && nums[i+1]!=0) mex2=0;
        
        if(mex1==mex2){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}