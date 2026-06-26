#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,k; cin>>n>>k;
    string a,b; cin>>a>>b;

    ll m=1+((1<<k)+1-1)/2;
    string c="";

    for(int i=0;i<n;i++){
        if(a[i]==b[i]) c+='0';
        else c+='1';
    }

    ll ans=0;

    ll oa=0, za=0;
    for(int j=0;j<n;j++){
        if(a[j]=='1') oa++;
        else za++;
    }

    ll ob=0, zb=0;
    for(int j=0;j<n;j++){
        if(b[j]=='1') ob++;
        else zb++;
    }
    
    ll oc=0, zc=0;
    for(int j=0;j<n;j++){
        if(c[j]=='1') oc++;
        else zc++;
    }

    ll ca=((1<<k)+1)/3, cb=((1<<k)+1)/3, cc=((1<<k)+1)/3;

    if(((1<<k)+1)%3){
        ca++;
        cb++;
    }

    ans=ca*oa*za+cb*ob*zb+cc*oc*zc;
    
    cout<<ans<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}