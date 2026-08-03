class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int sum = 0;

        unordered_map<int, int> mp;
        mp[0] = 1; // empty prefix

        for(int i = 0; i < n; i++) {
            sum += nums[i];
            int remainder = ((sum % k) + k) % k; // handle negative

            ans += mp[remainder];   // add frequency
            mp[remainder]++;        // update frequency
        }
        return ans;
    }
};
