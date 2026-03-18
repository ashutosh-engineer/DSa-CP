#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        unordered_map<int, int> freq;
        for (int x : a) freq[x]++;
        
        // count distinct elements
        if (freq.size() > 2) {
            cout << "NO\n";
        }
        else if (freq.size() == 1) {
            cout << "YES\n";
        }
        else {
            // exactly 2 distinct elements
            auto it = freq.begin();
            int f1 = it->second;
            it++;
            int f2 = it->second;
            
            if (abs(f1 - f2) <= 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    
    return 0;
}