#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int freq[26]={0};
    // Frequency count
    for (char ch : s) {
        freq[ch - 'a']++; //starting point
    }
    // Print frequencies
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) { //those frequency is more than 0
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }
    return 0;
}


// sdfghhgfs //Output
// d : 1
// f : 2
// g : 2
// h : 2
// s : 2