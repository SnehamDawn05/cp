#include<bits/stdc++.h>
using namespace std;
using ll= long long;

bool pal(string s){
    int sp=0, ep=s.size()-1;
    while(sp<ep){
        if(s[sp]!=s[ep]) return false;
        sp++; ep--;
    }
    return true;
}

void solve(){
    ll n; cin>>n;
    
    vector<ll> pal={0,1,2,3,4,5,6,7,8,9,22,11};

    ll a=pal[n%12];

    if(a<=n){
        cout<<a<<" "<<n-a<<endl;
    }else cout<<-1<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}