class Solution {
public:
    int longestWPI(vector<int>& hours) {
        int n = hours.size();
        vector<int> prefix(n+1, 0);
        for(int i=0; i<n; i++){
            prefix[i+1] = prefix[i] + (hours[i] > 8 ? 1 : -1);
        }

        //Now what to do check where i have seen the first -1; usse index i;
        unordered_map<int, int>mp;
        int ans=0;
        for(int i=0; i<=n; i++){
            if(!mp.count(prefix[i])) mp[prefix[i]] = i;
            for(int j=0; j<i; j++){
                if(prefix[i] - prefix[j] > 0){
                    ans = max(ans, i-j);
                }

            }
        }
        return ans;
        
    }
};