#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    int n; cin>>n;
    string s; cin>>s;

    ll o=0;
    for(auto& c: s) if(c=='1') o++;

    if(o==n){
        cout<<0<<endl;
        return;
    }

    ll c=0, m=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            c++;
            m=max(c,m);
        }else c=0;
    }
    int i=0;
    if(s[n-1]=='0'){
        while(s[i++]=='0'){
            c++;
            m=max(c,m);
        }
    }

    cout<<m<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}