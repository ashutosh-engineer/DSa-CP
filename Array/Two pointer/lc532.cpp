class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0, right = 1;
        int pair_count = 0;

        while (left < n && right < n) {
            if (left == right || nums[right] - nums[left] < k) {
                right++;
            } else if (nums[right] - nums[left] > k) {
                left++;
            } else { // equal case
                pair_count++;
                left++;
                // skip duplicates
                while (left < n && nums[left] == nums[left-1]) {
                    left++;
                }
            }
        }
        return pair_count;
    }
};
