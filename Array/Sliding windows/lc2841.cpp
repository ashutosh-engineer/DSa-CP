class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        int n=nums.size();
        unordered_map<int , int> mp;
        long long sum=0;
        

        //In size k subarray find distinct lement then take maxsum;
        for(int i=0; i<k; i++){
            mp[nums[i]]++;
            sum+=nums[i];
        }


        long long ans=0;
        if(mp.size() >= m){
            ans=sum;
        }
        for(int i=k; i<n; i++){
            mp[nums[i]]++;
            sum += nums[i];
            sum -= nums[i-k];
            mp[nums[i-k]]--;
            if(mp[nums[i-k]] == 0) mp.erase(nums[i-k]);
            if(mp.size() >= m) ans = max(ans, sum);
        }
        return ans; 
    }
};