class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>st (nums.begin(), nums.end());
        int multiplyer=1;
        int candidate=k;
        while(true){
            candidate=k*multiplyer;
            if(st.find(candidate) == st.end()){
                return candidate;
            }
            multiplyer++;
        }
    }
};