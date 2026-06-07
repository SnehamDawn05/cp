#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    string s; cin>>s;
    string s1=s;

    for(int i=1;i<=n;i++){
        for(int j=1;j<n-1;j++){
            if(s[j+1]=='1' && s[j-1]=='1') s[j]='1';
        }
    }

    ll maxi=0, mini=0;

    for(int i=0;i<n;i++){
        if(s[i]=='1') maxi++;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<n-1;j++){
            if(s[j+1]=='1' && s[j-1]=='1') s[j]='0';
        }
    }

    for(int i=0;i<n;i++){
        if(s[i]=='1') mini++;
    }

    cout<<mini<<" "<<maxi<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}