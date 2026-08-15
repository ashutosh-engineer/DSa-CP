class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int totalXor = 0;
        bool allZero = true;
        for (int x : nums) {
            totalXor ^= x;
            if (x != 0) allZero = false;
        }

        if (allZero) return 0;                 // special case
        if (totalXor != 0) return nums.size(); // whole array works
        return nums.size() - 1;                // drop one element
    }
};
