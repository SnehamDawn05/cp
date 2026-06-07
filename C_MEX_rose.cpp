#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int nok=0, nom=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==k) nok++;
        }
        unordered_set<int> s;
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]<k){
                if(s.find(a[i])==s.end()) count++;
                s.insert(a[i]);
            } 
        }
        nom=k-count;

        cout<<max(nom,nok)<<endl;
    }



    return 0;
}