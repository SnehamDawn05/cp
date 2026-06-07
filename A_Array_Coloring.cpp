#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector <ll> nums(n);
    for(auto& num: nums) cin>>num;

    vector<vector<ll>> c(n,vector<ll>(2));

    for(int i=0;i<n;i++){
        c[i][0]=nums[i];
        if(i%2==0) c[i][1]=0;
        else c[i][1]=1;
    }

    sort(c.begin(),c.end());

    for(int i=1;i<n;i++){
        if(c[i][1]==c[i-1][1]){
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