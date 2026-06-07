#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    ll n, done; cin>>n;

    for(int i=3;i<2*n;i+=2){
        cout<<"? "<<i<<" "<<i+1<<endl;
        cin>>done;
        if(done){
            cout<<"! "<<i<<endl;
            return;
        }
    }

    cout<<"? 1 3"<<endl;
    cin>>done;
    if(done){
        cout<<"! 1"<<endl;
        return;
    }

    cout<<"? 1 4"<<endl;
    cin>>done;
    if(done){
        cout<<"! 1"<<endl;
        return;
    }

    cout<<"! 2"<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}