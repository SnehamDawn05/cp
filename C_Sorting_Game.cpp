#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n; cin>>n;
    string s; cin>>s;

    string s1=s;
    sort(s1.begin(), s1.end());
    if(s1==s){
        cout<<"Bob"<<endl;
        return;
    }

    ll o=0, z=0;

    for(int i=0;i<n;i++){
        if(s[i]=='0') z++;
    }

    ll idx=-1;

    for(int i=0;i<n-1;i++){
        if(s[i]=='1') o++;
        else z--;

        if(o==z){
            idx=i;
            break;
        }
    }

    if(idx!=-1){
        vector<ll> t;
        for(int i=0;i<n;i++){
            if(i<=idx && s[i]=='1') t.push_back(i);
            if(i>idx && s[i]=='0') t.push_back(i);
        }

        cout<<"Alice"<<endl;
        cout<<t.size()<<endl;
        for(int i=0;i<t.size();i++) cout<<t[i]+1<<" ";
        cout<<endl;
    }else cout<<"Bob"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}