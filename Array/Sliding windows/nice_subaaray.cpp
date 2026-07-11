//1248. Count Number of Nice Subarrays
//Time Complexity:-Big O(n)
//space complexity-Big O(1)
//Time taken:-   6 minutes 22 seconds

class Solution {
public:
    int atmost(vector<int>& nums, int k){
        int n=nums.size();
        int counter=0; //varibale to count odd
        int ans=0; // to count answer;
        int left=0; //left varibale of window

        for(int right=0; right<n; right++){
            if(nums[right] % 2 != 0){
                counter++;
            }

            while(counter > k){
                if(nums[left] % 2 != 0) counter--;
                left++;
            }
            ans+=right-left+1;
        }

        return ans;

        
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums, k) - atmost(nums, k-1);
    }
};