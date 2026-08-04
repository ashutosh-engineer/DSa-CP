class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left = -1, right = -1;

        // find left boundary
        int l = 0, r = n-1;
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(nums[mid] >= target) r = mid-1;
            else l = mid+1;
            if(nums[mid] == target) left = mid;
        }

        // find right boundary
        l = 0, r = n-1;
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(nums[mid] <= target) l = mid+1;
            else r = mid-1;
            if(nums[mid] == target) right = mid;
        }

        return {left, right};

    }
};