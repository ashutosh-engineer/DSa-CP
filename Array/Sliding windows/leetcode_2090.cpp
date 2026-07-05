//2090. K Radius Subarray Averages
//Fixed  window-sliding window questio
//Time taken-32 minutes;
//Time complexity-O(n)
//IMportant notes always- always see type casting from long long to int needed else show overflow;
// radius is between so for full window it is 2*k+1 that is if k=2 then window size id 5 so there is equal 
//2 elemnt on left and right;

//sum is long long but you cant store it in int vevtor thats why type casting;

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        //n i sthe size of vector and -1 is desfuklt value;
        vector<int> ans(n, -1);
        long long sum=0;
        //This varibale is going to be used to take sum of elemnts for taking
        //the average;
        //Base case;
        if(2*k+1 > n){
            return  ans;
        }

        //
        for(int i=0; i<2*k+1; i++){
            sum+=nums[i];

        }

        ans[k]=(int)(sum/(2*k+1));

        //sliding loop;
        for(int i=k+1; i<=n-k-1; i++){
            ///Reason to run it from k+1 is that i dont want last windows last elemnt to be inclueded gain;

            //And n-k-1 stands we should not go out of bounds;
            sum+=nums[i+k];
            //removing  last element of last window;
            sum -= nums[i-k-1];  // left edge of previous window

            ans[i]=(int)(sum/(2*k+1));//Thast whole window here k is just a radius;
            //Concept of radius is that it the distance from center;
            //so if k is 3 then window size will be 7 that will be window size;
        }

        return ans;
    }
};