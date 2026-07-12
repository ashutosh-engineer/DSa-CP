class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int count[3] = {0, 0, 0}; // counts for 'a', 'b', 'c'
        int left = 0, ans = 0;

        for (int right = 0; right < n; right++) {
            count[s[right] - 'a']++;

            // shrink window until it still contains all three chars
            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                ans += (n - right); // all substrings starting at left and ending >= right
                count[s[left] - 'a']--;
                left++;
            }
        }
        return ans;
    }
};
