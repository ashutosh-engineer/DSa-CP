#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;
        
        if(a > b){
            cout << "First\n";
        }
        else if(b > a){
            cout << "Second\n";
        }
        else{
            if(c % 2) cout << "First\n";
            else cout << "Second\n";
        }
    }
    
    return 0;
}