#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        vector<string> grid(10);
        for (int i = 0; i < 10; i++) {
            cin >> grid[i];
        }

        int total = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    int layer = min({i, j, 9 - i, 9 - j});
                    total += (layer + 1);
                }
            }
        }

        cout << total << "\n";
    }

    return 0;
}