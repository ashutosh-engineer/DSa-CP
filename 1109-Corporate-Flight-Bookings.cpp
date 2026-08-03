class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff_arr(n+2,0);

        for(auto &b : bookings){
            int start=b[0];
            int end=b[1];
            int count=b[2];

            
            diff_arr[start]+=count;
            diff_arr[end+1] -=count;
        }

        vector<int>cummulative;
        int cummsum=0;
        for(int i=1; i<=n; i++){
            cummsum+=diff_arr[i];
            cummulative.push_back(cummsum);
        }
        return cummulative;
    }
};