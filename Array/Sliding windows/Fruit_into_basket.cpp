//904. Fruit Into Baskets
//Time Complexity:-Big O(n), space-complexity is Big O(n);
//Time taken:- 13 minutes  26 seconds

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        unordered_map<int ,int> mp;
        int k=2;
        int ans=0;
        int left=0;

        for(int right=0; right<n; right++){
            mp[fruits[right]]++;

            while(mp.size() > k){
                mp[fruits[left]]--;
                if(mp[fruits[left]] == 0) mp.erase(fruits[left]);
                left++; //Window shrinking;
            }
            ans=max(ans ,right-left+1);
        }
        return ans;
        
    }
};