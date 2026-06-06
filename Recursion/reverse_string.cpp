#include<bits/stdc++.h>
using namespace std;

string rev_string(string a){
    // Base case
    if(a.size() < 2) return a;

    char last = a[a.size()-1];
    string remaining = a.substr(0, a.size()-1);

    // Your line — just fix the one mistake
    return last + rev_string(remaining);
}

int main(){
    cout << rev_string("abcd");  // Expected: dcba
    return 0;
}