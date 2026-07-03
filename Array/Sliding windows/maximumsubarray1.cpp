//643. Maximum Average Subarray I

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < k) return 0;  // not enough elements for a window

        // Step 1: initial window sum
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        double maxAvg = (double)sum / k;

        // Step 2: slide the window
        for (int i = k; i < n; i++) {
            sum += nums[i];        // add new element
            sum -= nums[i - k];    // remove old element
            double currAvg = (double)sum / k;
            maxAvg = max(maxAvg, currAvg);
        }

        return maxAvg;
    }
};
