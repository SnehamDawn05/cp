#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,k; cin>>n>>k;
    string s; cin>>s;

    for(int i=0;i<=n-k-1;i++){
        if(s[i]=='0') continue;
        
        if(s[i+k]=='1'){
            s[i]='0';
            s[i+k]='0';
        }else{
            s[i]='0';
            s[i+k]='1';
        }
    }

    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}