//424. Longest Repeating Character Replacement
//Time Complexity:-Big O(n), space-complexity is also same;
//Time taken:-22 minutes with help of claude

class Solution {
public:
    int characterReplacement(string s, int k) {
        int  n=s.size();
        unordered_map<char , int>mp; //space complexity becomes Big O(1)
        //Time complexty will be Big O(n*k)==O(n)
        int answer=0;
        int largest_frequency=0;
        if(n < k){
            //Then no answer exist here;
            return 0;
        }

        int left=0;
        for(int right=0; right < n; right++){
            mp[s[right]]++; //Frequency pushed in the  hashmap//
            //Lookups Big O(1)

            int window_size=right-left+1;//This will be whole window size;
            largest_frequency=max(largest_frequency , mp[s[right]]);


            while(window_size-largest_frequency > k){ //Not using the if cause this is repetative task used to check in the whole window;
            //And if this case succeds then only window will be valid and further operations will be performed;
            mp[s[left]]--;
            left++;
            window_size=right-left+1;
            }
            answer=max(answer, right-left+1); //again window  size;
        }

        return answer;
    }

};