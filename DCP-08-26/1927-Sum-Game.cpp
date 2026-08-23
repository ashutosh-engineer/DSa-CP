class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int sumLeft = 0, sumRight = 0;
        int qLeft = 0, qRight = 0;

        // Split halves
        for (int i = 0; i < n/2; i++) {
            if (num[i] == '?') qLeft++;
            else sumLeft += (num[i] - '0');
        }
        for (int i = n/2; i < n; i++) {
            if (num[i] == '?') qRight++;
            else sumRight += (num[i] - '0');
        }

        int diff = sumLeft - sumRight;
        int qDiff = qRight - qLeft;

        // Alice wins if total '?' is odd OR Bob cannot balance
        if ((qLeft + qRight) % 2 == 1) return true;
        return diff != 9 * (qDiff / 2);
    }
};
