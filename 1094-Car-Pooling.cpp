class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n=trips.size();
        map<int , int> mp;
        for(auto & trip: trips){
            int num=trip[0], from=trip[1], to=trip[2];
            mp[from]+=num;
            mp[to]-=num;
        }

        int current=0;
        for( auto & event : mp){
            current+=event.second;

            if(current > capacity){
                return false;
            }
        }
        
        return true;
    }
};