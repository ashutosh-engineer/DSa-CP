class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();

        // int maximum=INT_MIN;
        auto it=max_element(nums.begin(), nums.end());
        int index = distance(nums.begin(), it);

        return index;
        
    }
};