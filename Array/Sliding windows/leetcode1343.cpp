//1343. Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
//Time taken 15 minutes 26 seconds;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int counter=0;
        int sum=0;
        int average=0;
        for(int i=0; i<k; i++){
            sum+=arr[i];
        }

        average = sum / k;
        if(average >= threshold){
                counter++;
        }

        for(int i=k; i<n; i++){
            sum+=arr[i];
            sum-=arr[i-k]; //leaving last element
            average=sum/k;

            if(average >=  threshold){
                counter++;
            }
        }

        return counter;
    }
};