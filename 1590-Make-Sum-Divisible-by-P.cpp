class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long total_sum = 0;
        int n = nums.size();
        for (int x : nums) total_sum += x;

        int target = total_sum % p;
        if (target == 0) return 0; // already divisible

        unordered_map<int, int> mp;
        mp[0] = -1; // base case

        long long prefix = 0;
        int ans = n;

        for (int i = 0; i < n; i++) {
            prefix += nums[i];
            int remainder = prefix % p;
            int need = (remainder - target + p) % p;

            if (mp.count(need)) {
                ans = min(ans, i - mp[need]);
            }
            mp[remainder] = i;
        }

        return ans == n ? -1 : ans;
    }
};
