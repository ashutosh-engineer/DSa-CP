//1004. Max Consecutive Ones III
//Time Complexity:-Big O(n), space-complexity is Big O(1);
//Time taken:-11 minutes 19 seconds


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int xero_tracker=0;
        int ans=0;
        int left=0;

        for(int right=0; right<n; right++){
            if(nums[right]==0){
                xero_tracker++;
            }

            while(xero_tracker > k){
               if(nums[left] == 0) xero_tracker--;
                left++;

            }
            ans=max(ans , right-left+1);
        }

        return ans;
        
    }
};