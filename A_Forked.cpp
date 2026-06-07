#include<bits/stdc++.h>
using namespace std;
using ll= long long;

struct pair_hash {
    size_t operator()(const pair<ll,ll>& p) const {
        return hash<ll>()(p.first) ^ (hash<ll>()(p.second) << 1);
    }
};

void put(ll a, ll b, ll xk, ll yk, unordered_set<pair<ll,ll>, pair_hash>& knight){
    vector<vector<int>> dir={{1,1},{-1,1},{1,-1},{-1,-1}};
    for(auto& d: dir){
        ll nx=xk+a*d[0], ny=yk+b*d[1];
        knight.insert({nx,ny});
    }
}

void solve(){
    ll a,b,xk,yk,xq,yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;

    unordered_set<pair<ll,ll>, pair_hash> knight, queen;

    put(a,b,xk,yk,knight);
    put(b,a,xk,yk,knight);

    put(a,b,xq,yq,queen);
    put(b,a,xq,yq,queen);

    ll ans = 0;
    for(auto &p : knight){
        if(queen.count(p)) ans++;
    }

    cout << ans << "\n";
}


int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}