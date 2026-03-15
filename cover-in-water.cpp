#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool found = false;
        int dots = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '.') dots++;

            if (i + 2 < n && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
                found = true;
            }
        }

        if (found)
            cout << 2 << endl;
        else
            cout << dots << endl;
    }
}