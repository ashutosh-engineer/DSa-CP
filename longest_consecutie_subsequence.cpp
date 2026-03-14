class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> s(nums.begin(), nums.end());

        int longest = 0;

        for(int num : nums){

            if(s.find(num - 1) == s.end()){ // start of sequence

                int count = 1;
                int current = num;

                while(s.find(current + 1) != s.end()){
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};
