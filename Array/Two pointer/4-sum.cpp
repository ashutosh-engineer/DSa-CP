class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        // Step 1: Sort the array.
        // Sorting helps us:
        // 1. Use two pointers.
        // 2. Skip duplicate values easily.
        sort(nums.begin(), nums.end());

        int n = nums.size();
        vector<vector<int>> ans;

        // Step 2: Fix the first number.
        for (int i = 0; i < n - 3; i++) {

            // Skip duplicate first elements.
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            // Step 3: Fix the second number.
            for (int j = i + 1; j < n - 2; j++) {

                // Skip duplicate second elements.
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                // Step 4:
                // Find the remaining two numbers using two pointers.
                int left = j + 1;
                int right = n - 1;

                while (left < right) {

                    // Use long long to avoid integer overflow.
                    long long sum =
                        (long long)nums[i] +
                        nums[j] +
                        nums[left] +
                        nums[right];

                    // Step 5:
                    // If sum is exactly equal to target,
                    // we found one valid quadruplet.
                    if (sum == target) {

                        ans.push_back(
                            {nums[i], nums[j], nums[left], nums[right]}
                        );

                        // Move both pointers.
                        left++;
                        right--;

                        // Skip duplicate third elements.
                        while (left < right &&
                               nums[left] == nums[left - 1])
                            left++;

                        // Skip duplicate fourth elements.
                        while (left < right &&
                               nums[right] == nums[right + 1])
                            right--;
                    }

                    // Step 6:
                    // Sum is too small.
                    // Increase it by moving left pointer forward.
                    else if (sum < target) {
                        left++;
                    }

                    // Step 7:
                    // Sum is too large.
                    // Decrease it by moving right pointer backward.
                    else {
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};