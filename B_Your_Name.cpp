#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n-->0){
        int x; cin>>x;
        string s,t;
        cin>>s>>t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s==t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}