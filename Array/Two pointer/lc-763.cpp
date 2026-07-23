class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.size();
        vector<int>ans;

        vector<int>last(26,0);
        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        int start=0, end=0;
        for (int i = 0; i < s.size(); i++) {
            end = max(end, last[s[i] - 'a']);  // extend partition boundary
            if (i == end) {                    // partition cut
                ans.push_back(end - start + 1);
                start = i + 1;
            }
        }
        
        return ans;
        
    }
};