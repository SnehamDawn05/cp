#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }

    cout<<n<<" ";
    for(int i=1;i<=n-1;i++){
        cout<<i<<" ";
    }

    for(int i=1;i<=n;i++){
        cout<<i<<" ";
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