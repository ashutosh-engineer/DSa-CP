class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0, sum = 0;
        unordered_map<int,int> mp;
        mp[0] = 1; // empty prefix

        for(int i = 0; i < n; i++) {
            sum += nums[i];

            // check if (sum - k) exists
            if(mp.count(sum - k)) {
                ans += mp[sum - k];
            }

            mp[sum]++;
        }
        return ans;
    }
};
