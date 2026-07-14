class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        long long sum=0;
        sort(nums.begin(), nums.end());
        int left=0;

        for (int right=0; right<n; right++){
            sum+=nums[right];

            while((long long)(right-left+1)*nums[right] -sum > k){
                sum-=nums[left];
                left++;
            }
            ans=max(ans , right-left+1);
        }
        return ans;
    }
};