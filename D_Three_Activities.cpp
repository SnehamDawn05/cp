#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    vector<vector<ll>> a(n, vector<ll>(2)), b(n, vector<ll>(2)), c(n, vector<ll>(2));
    for(int i=0;i<n;i++){
        cin>>a[i][0];
        a[i][1]=i;
    }
    for(int i=0;i<n;i++){
        cin>>b[i][0];
        b[i][1]=i;
    }
    for(int i=0;i<n;i++){
        cin>>c[i][0];
        c[i][1]=i;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    ll ans=0;

    for(int i=n-3;i<n;i++){
        for(int j=n-3;j<n;j++){
            if(b[j][1]==a[i][1]) continue;
            for(int k=n-3;k<n;k++){
                if(c[k][1]==a[i][1] || c[k][1]==b[j][1]) continue;
                ans=max(ans,a[i][0]+b[j][0]+c[k][0]);
            }
        }
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