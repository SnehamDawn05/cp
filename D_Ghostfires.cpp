#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    vector<pair<ll,char>> a={{0,'R'},{0,'G'},{0,'B'}};

    for(auto& x: a) cin>>x.first;

    string ans="";
    ll i=0;

    while(true){
        int pick=-1;
        sort(a.rbegin(), a.rend());
        for(auto& j: {0,1,2}){
            if(a[j].first==0) continue;
            if(i>=1 && a[j].second==ans[i-1]) continue;
            if(i>=3 && a[j].second==ans[i-3]) continue;
            if(pick==-1){
                pick=j;
                continue;
            }
            if(a[pick].first==a[j].first && i>=2 && a[j].second==ans[i-2]) pick=j;
        }
        if(pick==-1) break;
        ans+=a[pick].second;
        a[pick].first--;
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