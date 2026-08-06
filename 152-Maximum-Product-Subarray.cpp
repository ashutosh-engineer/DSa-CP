class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxproduct = nums[0];
        int minproduct = nums[0];
        int ans = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] < 0) {
                swap(maxproduct, minproduct);
            }
            maxproduct = max(nums[i], maxproduct * nums[i]);
            minproduct = min(nums[i], minproduct * nums[i]);

            ans = max(ans, maxproduct);
        }

        return ans;
    }
};
