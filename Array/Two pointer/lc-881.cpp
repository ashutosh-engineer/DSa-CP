class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        int left=0,right=n-1;
        int sum=0;
        int boat_count=0;

        while(left <= right){
           sum=people[left]+people[right];

           if(sum <= limit){
            boat_count++;
            left++;
            right--;
           }

           if(sum > limit){
            boat_count++;
            right--;
           }

            if(left == right){
                boat_count++;
                break;
            }
        }

        return boat_count;
        
    }
};