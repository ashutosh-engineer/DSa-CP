// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         vector<int>ans;
//         int multiply=0;
//         int n=nums.size();

//         for(int i=0; i<n; i++){
//             multiply=nums[i]*nums[i];
//             ans.push_back(multiply);
//         }

//         sort(ans.begin(), ans.end());
// //Big O nlogn is time complexity but can we do better possible answer is yes;
//         return ans;
        
//     }
// };

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);  // pehle se n size ka array
        int left = 0, right = n - 1;
        int pos = n - 1;      // sabse peeche wale index se fill karna shuru

        while (left <= right) {
            int left_square = nums[left] * nums[left];
            int right_square = nums[right] * nums[right];

            if (left_square > right_square) {
                ans[pos] = left_square;
                left++;
            } else {
                ans[pos] = right_square;
                right--;
            }
            pos--;
        }
        return ans;
    }
};