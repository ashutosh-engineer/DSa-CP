//1st question over codeforces;
//Day-1 of Competitive programming Journey
//Halloumi-Boxes.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        vector<long long>a_copy=a;
        sort(a_copy.begin(), a_copy.end());
        
        if(a_copy==a || k>1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}