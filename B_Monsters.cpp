#include<bits/stdc++.h>
using namespace std;
using ll= long long;

bool cmp(pair<ll,ll>& a, pair<ll,ll>& b){
    if(a.first==b.first) return a.second<b.second;
    return a.first>b.first;
}

void solve(){
    ll n,k; cin>>n>>k;

    vector<pair<ll,ll>> die(n);

    /*
    Example:

m = 10, k = 5

🔴 Code 1 behavior
if(m % k)   // false
    m = m % k;


So m remains:

m = 10


➡️ Stored value = 10 ❌ (WRONG)
    */ 
    
    for(int i=0;i<n;i++){
        ll m; cin>>m;
        m=m%k;
        if(m==0) m=k;

        die[i]={m,i};
    }
    
    sort(die.begin(), die.end(), cmp);

    for(int i=0;i<n;i++){
        cout<<die[i].second+1<<" ";
    }

    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}