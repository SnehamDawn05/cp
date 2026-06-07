#include<bits/stdc++.h>
using namespace std;
using ll= long long;

int main(){
    ll n,d; cin>>n>>d;
    vector<ll> p(n);

    for(auto& x: p) cin>>x;

    sort(p.begin(),p.end());

    ll m=n, ans=0;

    for(int i=(int)n-1;i>=0;i--){
        ll r=d/p[i]+1;
        if(r<=m){
            ans++;
            m-=r;
        }else break;
    }

    cout<<ans<<endl;


    return 0;
}