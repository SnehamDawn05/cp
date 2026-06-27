#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<ll> a(n), b(n), c(n);

    for(auto& x: a) cin>>x;
    for(auto& x: b) cin>>x;
    for(auto& x: c) cin>>x;

    ll x=0, y=0;

    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n;j++){
            if(a[(i+j)%n]<b[j]) continue;
            else{
                flag=false;
                break;
            }
        }
        if(flag) x++;
    }

    for(int k=0;k<n;k++){
        bool flag=true;
        for(int j=0;j<n;j++){
            if(b[j]<c[(k+j)%n]) continue;
            else{
                flag=false;
                break;
            }
        }
        if(flag) y++;
    }

    cout<<x*y*n<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}