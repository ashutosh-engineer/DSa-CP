class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();

        int sum=0;
        unordered_map<int , int>mp;

        if(k % 2 != 0){
            return false;
        }

        for(int i=0; i<n; i++){
            sum+=nums[i];

            if(mp[sum] % k==0 && i >= 2){
                return true;
            }else{
                mp[sum]=i;
            }
        }
        return false;
    }
};