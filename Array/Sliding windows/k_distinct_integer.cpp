//K-distinct integer in an arry;
//Time Complexity:-Big O(n)
//space complexity-Big O(n)
//Time taken:-22 minutes;

class Solution {
public:

    int atMost(vector<int>& nums, int k){
        int n=nums.size();
        int sub_counter=0;
        unordered_map<int ,int> mp;
        int left=0;

        for(int right=0; right<n; right++){
            mp[nums[right]]++; //Frequency pushed;

              while(mp.size() > k){
                mp[nums[left]]--;
                if(mp[nums[left]] == 0) mp.erase(nums[left]);
                left++; //Window shrinking;
            }
            sub_counter+=right-left+1;
        }
        return sub_counter;
    }


    int subarraysWithKDistinct(vector<int>& nums, int k) {
         return atMost(nums, k) - atMost(nums, k-1);
        
    }
};