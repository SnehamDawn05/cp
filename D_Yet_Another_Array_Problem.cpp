#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
    while(a && b){
        a=a%b;
        swap(a,b);
    }
    return max(a,b);
}



int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> nums(n);

        for(int i=0;i<n;i++) cin>>nums[i];

        bool flag=false;
        long long ans=-1;
        for(int i=2;i<=1e18;i++){
            for(int j=0;j<n;j++){
                if(gcd(i,nums[j])==(long long)1){
                    ans=(long long)i;
                    flag=true;
                    break;
                }
            }
            
            if(flag){
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}