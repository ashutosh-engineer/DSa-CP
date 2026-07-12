//. LC 340 — Longest Substring with At Most K Distinct Characters
// tc=O(n)
// sc=O(n)

// Given a string s and integer k, return the length of the longest substring that contains at most k distinct characters.

// Input:  s = "eceba", k = 2
// Output: 3  ("ece")

// Input:  s = "aa", k = 1  
// Output: 2  ("aa")

// Input:  s = "aabbcc", k = 2
// Output: 4  ("aabb" or "bbcc")

class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        int n=s.size();
        int left=0;
        unordered_map<char ,int>mp;
        int ans=0;//Maximum length so take INT_MIN because any value will be there it will be greater;

        for(int right=0; right<n; right++){
            mp[s[right]]++;

            while(mp.size() > k){
                mp[s[left]]--;
                if(mp[s[left]]==0) mp.erase(s[left]);
                 left++;
            }
             ans=max(ans , right-left+1);

        }
        return ans;
    }
};