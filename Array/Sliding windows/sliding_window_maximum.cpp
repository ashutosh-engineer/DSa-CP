//239. Sliding window maximum
//Time Complexity:-Big O()n
//Time taken:-claudes help

lass Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;        // Final result will be stored here
        deque<int> dq;          // Stores indices of useful elements

                for (int i = 0; i < n; i++) {
                    
                    // Step 1: Remove all smaller elements (not useful for max)
                    while (!dq.empty() && nums[dq.back()] < nums[i]) {
                        dq.pop_back();
                    }
                    
                    // Step 2: Add current index to deque
                    dq.push_back(i);
                    
                    // Step 3: Remove indices that are out of the current window
                    if (dq.front() <= i - k) {
                        dq.pop_front();
                    }
                    
                    // Step 4: Record the maximum for the current window
                    if (i >= k - 1) {
                        ans.push_back(nums[dq.front()]);
                    }
                }

                return ans;

        
    }
};



