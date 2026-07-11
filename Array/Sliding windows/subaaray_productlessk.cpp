//713. Subarray Product Less Than K

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int product = 1;
        int ans = 0;
        int left = 0;

        if (k <= 1) return 0;

        for (int right = 0; right < n; right++) {
            product *= nums[right];

            while (product >= k && left <= right) {
                product /= nums[left];
                left++;
            }
            ans += (right - left + 1);
        }

        return ans > 0 ? ans : 0;  
    }
};
