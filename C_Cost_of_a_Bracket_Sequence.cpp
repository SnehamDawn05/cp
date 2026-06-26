#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n,k; cin>>n>>k;
    string s; cin>>s;

    string ans="";
    for(int i=0;i<n;i++){
        ans+='0';
    }

    stack<ll> st1;
    ll b1=0;

    for(int i=0;i<n;i++){
        if(s[i]=='('){
            st1.push(i);
            b1++;
        }
        else{
            b1--;
        }

        if(b1<0){
            b1=0;
        }

        if(b1==0){
            while(k && st1.size()){
                ans[st1.top()]='1';
                st1.pop();
                k--;
            }
        }
    }

    stack<ll> st2;
    ll b2=0;

    for(int i=n-1;i>=0;i--){
        if(ans[i]=='1') continue;
        if(s[i]==')'){
            st2.push(i);
            b2++;
        }
        else{
            b2--;
        }

        if(b2<0){
            b2=0;
        }

        if(b2==0){
            while(k && st2.size()){
                ans[st2.top()]='1';
                st2.pop();
                k--;
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