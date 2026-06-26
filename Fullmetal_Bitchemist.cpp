#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    string s; cin>>s;

    vector<ll> cnt(3,0);
    cnt[0]=1;

    ll o=0, z=0;

    ll y=1, ans=0;

    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            z++;
        }else{
            o++;
        }
        ll x= ((o-z)%3+3)%3;
        ans+=(cnt[0]+cnt[1]+cnt[2]-cnt[x]);
        cnt[x]++;
        
        if(i>0 && s[i]!=s[i-1]){
            y++;
        }else{
            y=1;
        }

        ans-=((y-1)/2);
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