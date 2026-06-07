#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    int n; cin>>n;
    string s; cin>>s;

    int O=0, Z=0;

    for(int i=0;i<n;i++){
        if(s[i]=='1') O++;
        else Z++;
    }

    if(n<=2){
        cout<<1<<endl;
        return;
    }

    int z=0;

    int idx=0;
    while(idx<n && s[idx]=='0'){
        z++;
        idx++;
    }

    bool f=false;

    if(idx<n){
        f=true;
        O+=(z/3);
        if(z%3==2) O++;
        z=0;
    }

    for(int i=idx;i<n;i++){
        if(s[i]=='0') z++;
        else{
            O+=(z/3);
            z=0;
        }
    }

    O+=(z/3);

    if(f){
        if(z%3==2) O++;
    }else{
        if(z%3) O++;
    }

    cout<<O<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}