#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;

    if(n<=3) {
        cout<<n<<endl;
        return;
    }

    if(n%2==0){
        cout<<0<<endl;
        return;
    }

    if(n%2!=0) {
        cout<<1<<endl;
        return;
    }

}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}