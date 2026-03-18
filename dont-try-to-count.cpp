//Dont try to count .cpp.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m;
        
        string x, s;
        cin >> x >> s;
        
        bool found = false;
        
        for(int ops = 0; ops <= 6; ops++){
            if(x.find(s) != string::npos){
                cout << ops << "\n";
                found = true;
                break;
            }
            x += x;
        }
        
        if(!found) cout << -1 << "\n";
    }
    
    return 0;
}