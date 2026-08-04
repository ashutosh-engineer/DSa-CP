class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = nums[0] + nums[1] + nums[2]; // initial sum

        for (int i = 0; i < n-2; i++) {
            int l = i+1, r = n-1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];

                if (abs(sum - target) < abs(ans - target)) {
                    ans = sum; // update closest
                }

                if (sum < target) l++;
                else if (sum > target) r--;
                else return target; // exact match
            }
        }
        return ans;
    }
};
