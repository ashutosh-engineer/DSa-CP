//first varibale window question;
// Longest Substring Without Repeating Characters
//Time taken -14 minutes;
//Time complexity is O(n)
//cool feeled;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int , int>mp;
        int n=s.size();
        int left=0;
        int answer=0;

        for(int right=0; right < n; right++){
            mp[s[right]]++;
            //Elements added in the map;

            while(mp[s[right]] > 1){
                mp[s[left]]--;
                left++;
                //Elemnt out of window;
            }
            answer=max(answer, right-left+1);;
        }

        return answer;
        
    }
};


//Understoo why not to use freq array;
//also size of window formula that is right -left+1;
//Fixed  while loop