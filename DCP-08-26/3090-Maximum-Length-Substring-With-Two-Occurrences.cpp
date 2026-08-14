class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int ans=0;
        int left=0;

        unordered_map<char , int>mp;

        for(int right=0; right<n; right++){
            mp[s[right]]++;

            while(mp[s[right]] > 2){
                mp[s[left]]--;
                left++;
            }

            ans=max(ans, right-left+1);
        }
        return ans;
    }
};