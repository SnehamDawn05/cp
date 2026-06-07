#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,s,x; cin>>n>>s>>x;

    int sum=0;

    for(int i=0;i<n;i++){
        int a; cin>>a;
        sum+=a;
    }

    if((sum<s && x<=0) || (sum>s && x>=0)){
        cout<<"NO"<<endl;
        return;
    }
    
    if(abs(sum-s)%abs(x)==0){
        cout<<"YES"<<endl;
        return;
    }

    cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}