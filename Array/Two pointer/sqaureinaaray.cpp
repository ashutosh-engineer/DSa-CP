class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int multiply=0;
        int n=nums.size();

        for(int i=0; i<n; i++){
            multiply=nums[i]*nums[i];
            ans.push_back(multiply);
        }

        sort(ans.begin(), ans.end());
//Big O nlogn is time complexity but can we do better possible answer is yes;
        return ans;
        
    }
};