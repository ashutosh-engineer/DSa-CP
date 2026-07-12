class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int xero_tracker=0;
        int left=0;

        for(int right=0; right <n; right++){
            //track zeros;
            if(nums[right]==0){
                xero_tracker++;
            }

            while(xero_tracker > 1){
                if(nums[left]==0) xero_tracker--;  
                left++;
            }
            ans=max(ans,right-left);
        }
        return ans;
        
    }
};