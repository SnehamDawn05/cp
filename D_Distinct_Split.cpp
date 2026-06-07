#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    string s; cin>>s;

    unordered_map<char,ll> m1,m2;

    for(int i=0;i<n;i++) m1[s[i]]++;

    ll ans=1LL*m1.size()+m2.size();

    for(int i=0;i<n;i++){
        m1[s[i]]--;
        m2[s[i]]++;
        if(m1[s[i]]==0) m1.erase(s[i]);
        if(ans<m1.size()+m2.size()) ans=m1.size()+m2.size();
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