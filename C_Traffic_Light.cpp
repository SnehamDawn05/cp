#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    char c; cin>>c;
    string s; cin>>s;

    if(c=='g'){
        cout<<0<<endl;
        return;
    }

    s+=s;
    ll ans=0;
    
    int i=0;

    while(i<n){
        if(s[i]==c){
            int j=i;
            ll t=0;
            while(s[j]!='g'){
                j++;
                t++;
            }
            ans=max(ans,t);
            i=j; 
        }
        i++;
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