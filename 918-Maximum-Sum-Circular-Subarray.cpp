class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();

        int total_sum = nums[0];
        int maxsum = nums[0], maxsubarray = nums[0];
        int minsum = nums[0], minsubarray = nums[0];

        for (int i = 1; i < n; i++) {
            total_sum += nums[i];

            // Kadane for maximum subarray
            maxsum = max(nums[i], maxsum + nums[i]);
            maxsubarray = max(maxsubarray, maxsum);

            // Kadane for minimum subarray
            minsum = min(nums[i], minsum + nums[i]);
            minsubarray = min(minsubarray, minsum);
        }

        // If all numbers are negative, maxsubarray is the answer
        if (maxsubarray < 0) return maxsubarray;

        // Otherwise, take the better of normal Kadane and circular case
        return max(maxsubarray, total_sum - minsubarray);
    }
};
