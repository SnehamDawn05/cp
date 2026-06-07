#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    string s; cin>>s;
    ll s0=0, s1=0;
    for(auto& c: s){
        if(c=='0') s0++;
        else s1++;
    }
    ll t0=s0, t1=s1;

    if(t0==s1 && t1==s0){
        cout<<0<<endl;
        return;
    }

    ll cost=0;

    for(int i=s.size()-2;i>=-1;i--){
        if(s[i+1]=='0') s0--;
        else s1--;

        if(t0>s1){
            t0--;
            cost++;
        }
        
        if(t1>s0){
            t1--;
            cost++;
        }

        if(t1==s0 && t0==s1){
            cout<<cost<<endl;
            return;
        }
    }

    cout<<s.size()<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}