#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n, p; cin>>n>>p;
    vector<pair<ll,ll>> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i].second;
    }

    for(int i=0;i<n;i++){
        cin>>a[i].first;
    }

    sort(a.begin(), a.end());

    ll cost=p;
    ll rem=n-1;

    for(auto [c,h]: a){
        if(!rem) break;

        if(c>p) break;

        if(c<=p){
            if(rem>=h){
                cost+=h*c;
                rem-=h;
            }else{
                cost+=rem*c;
                rem=0;
            }
        }
    }

    cost+=rem*p;

    cout<<cost<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}