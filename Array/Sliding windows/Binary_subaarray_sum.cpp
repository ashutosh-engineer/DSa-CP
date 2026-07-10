class Solution {
public:
    int atMost(vector<int>& nums, int goal){
         int n=nums.size();
        int count_sub=0;
        int left=0;
        int sum=0;


        if(goal < 0){
            return 0;
        }

        for(int right=0; right < n ; right++){
            sum+=nums[right];

            while(sum > goal){
               if(nums[left] == 1) sum--;
                left++;
            }
            count_sub += right-left+1;
        }

        return count_sub; //THis will be my answer;
        
    }
    
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal-1);
    }
};