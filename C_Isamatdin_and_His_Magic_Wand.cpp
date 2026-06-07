#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int parity=a[0]%2;
        bool flag=true;
        for(int i=1;i<n;i++){
            if(a[i]%2!=parity){
                flag=false;
                break;
            }
        }
        if(flag){
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
        }else{
            sort(a.begin(),a.end());
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
    }


    return 0;
}