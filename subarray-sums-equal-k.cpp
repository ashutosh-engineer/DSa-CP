class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long count=0;
        int n=nums.size();

        //we just need to check the subaarrays whose sums are =0;
        for(int i=0; i<n; i++){
            int sum=0;

            for(int j=i; j<n; j++){
                sum+=nums[j];
                if(sum==k){
                    count++;
                }
            }
        }
        return count;
    }
};