class Solution {
public:
    bool caneat(vector<int>& piles,int speed,int h){
        long long hours=0;
        for(int bananas: piles){
            hours+=(bananas + speed -1) / speed; //ceil 
        }
        return hours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin(), piles.end());
        int ans=0;
        int mid=0;

        while(left <= right){
            mid=left +(right -left) /2;
            
            if(caneat(piles,mid, h)){
                ans=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }

        return ans;
    }
};