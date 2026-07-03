//1456. Maximum Number of Vowels in a Substring of Given Length
//GOing to use list then seen the sollution in copilot suugesting use functions as well as dont know how
//to subtract element in string i got to know;

//little bit impressed by me today as only 3-day progress is this;
Thanks to claude to helping in my learning journey;

class Solution {
public:
    bool isVowel(char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    int maxVowels(string s, int k) {
        int counter=0;
        int n=s.size();
        int count=0;

        for(int i=0; i<k; i++){
            if(isVowel(s[i]))count++;
        }

        int maxcount=count;
        for(int i=k; i<n; i++){
            if(isVowel(s[i])) count++;
            if(isVowel(s[i-k]))count--;
            maxcount=max(maxcount,count);

        }
        return maxcount;

        
    }
};