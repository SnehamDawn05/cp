#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    string x; cin>>x;
    string t="";
    
    int i=0;
    if(n%2){
        if(x[i]!='a' && x[i]!='?'){
            cout<<"NO"<<endl;
            return;
        }

        i++;
    }

    while(i<n){    
        if(x[i]!='?' && x[i]==x[i+1]){
            cout<<"NO"<<endl;
            return;
        }

        i+=2;
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