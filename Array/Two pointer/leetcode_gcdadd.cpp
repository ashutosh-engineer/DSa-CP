class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();

        vector<int> g;
        int mx = 0;

        // Step 1: Build gcd array
        for (int x : nums) {
            mx = max(mx, x);
            g.push_back(__gcd(x, mx));
        }

        // Step 2: Sort
        sort(g.begin(), g.end());

        // Step 3: Pair smallest with largest
        long long ans = 0;
        int i = 0, j = n - 1;

        while (i < j) {
            ans += __gcd(g[i], g[j]);
            i++;
            j--;
        }

        return ans;
    }
};