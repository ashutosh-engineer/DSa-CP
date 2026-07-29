class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int ,int> mp;
        int sum=0,counter=0;

        for(int i=0; i<n; i++){
            sum+=nums[i];

            if(mp.count[sum-k]){
                counter+=mp[sum-k];
            }
            mp[sum]++; //Putting it into the map;
        }
        return counter;
    }
};
