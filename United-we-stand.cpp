#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        
        sort(a.begin(), a.end());
        
        int mn = a[0];
        int cnt = 0;
        
        for(int x : a){
            if(x == mn) cnt++;
        }
        
        if(cnt == n){
            cout << -1 << "\n";
            continue;
        }
        
        // b = all minimums
        cout << cnt << " " << (n - cnt) << "\n";
        
        for(int i = 0; i < cnt; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
        
        for(int i = cnt; i < n; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}