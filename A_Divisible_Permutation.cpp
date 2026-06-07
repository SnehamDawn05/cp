#include<bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(){
    int n; cin>>n;
    vector<int> arr(n);

    int i=1, j=n, k=n-1;

    while(i<=j && k>=0){
        if(i<=j && k>=0) arr[k--]=j--;
        if(i<=j && k>=0) arr[k--]=i++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}