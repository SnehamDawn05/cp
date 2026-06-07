#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> coins(n);
    priority_queue<ll> even,odd;
    ll s=0, e=1e18;
    for(auto& c: coins){
        cin>>c;
        if(c%2==0){
            even.push(c);
            e=min(e,c);
        } else odd.push(c);
        s+=c;
        
        
    }
    vector<ll> ans(n,0);

    if(coins.size()==even.size()){
        for(auto& a: ans) cout<<a<<" ";
    }else if(coins.size()==odd.size()){
        for(int i=0;i<n;i++){
            if(i%2==0) cout<<odd.top()<<" ";
            else cout<<"0 ";
        }
    }else{


    ans[0]=odd.top();
    int i=1;
    while(even.size()){
        ans[i]=ans[i-1]+even.top();
        even.pop();
        i++;
    }
    bool d=true;
    while(i<n){
        if(i==n-1 && s%2==0){
            ans[i]=0;
            i++;
            continue;
        }
        if(d) ans[i]=ans[i-1]-e;
        else ans[i]=ans[i-1]+e;
        d=!d;
        i++;
    }
    for(auto& a: ans){
        cout<<a<<" ";
    }}
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}