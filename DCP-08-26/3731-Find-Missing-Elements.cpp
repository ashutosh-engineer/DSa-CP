class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        int largest=INT_MIN;
        int smallest=INT_MAX;
        vector<int>ans;

        auto[small,larg]=minmax_element(nums.begin(), nums.end());
        largest=*larg;
        smallest=*small;

        bool arr[101]={false};
        for(int num:nums){
            arr[num]={true};
        }

        for(int i=smallest; i<=largest; i++){
            if(! arr[i]){
                ans.push_back(i);
            }
        }

        return ans;
        
    }
};