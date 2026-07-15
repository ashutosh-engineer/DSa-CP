class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int k = t.size();

        if (k > n) return "";

        unordered_map<char, int> mpt;
        unordered_map<char, int> mps;

        // Frequency map of t
        for (char c : t) {
            mpt[c]++;
        }

        int left = 0;
        int matched = 0;

        int minLen = INT_MAX;
        int start = 0;

        for (int right = 0; right < n; right++) {
            mps[s[right]]++;

            // Count matched characters (including duplicates)
            if (mpt.count(s[right]) && mps[s[right]] <= mpt[s[right]]) {
                matched++;
            }

            // Shrink the window while it is valid
            while (matched == k) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                // Remove left character
                mps[s[left]]--;

                if (mpt.count(s[left]) && mps[s[left]] < mpt[s[left]]) {
                    matched--;
                }

                left++; 
            }
        }

        if (minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};s