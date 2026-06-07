#include<bits/stdc++.h>
using namespace std;
using ll= long long;

int gcd(int a, int b){
    if(a<b) swap(a,b);
    while(a && b){
        a=a%b;
        swap(a,b);
    }
    return max(a,b);
}

void solve(){
    int m,n,a,b; cin>>m>>n>>a>>b;
    if(gcd(m,a)==1 && gcd(n,b)==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}