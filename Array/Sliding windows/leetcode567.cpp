//567. Permutation in String
//Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

//In other words, return true if one of s1's permutations is the substring of s2.

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size(), m=s2.size();

        if(n > m) return false;

        int freqs1[26]={0};
        int freqs2[26]={0};
        //iterate over it.

        for(char ch : s1){
            freqs1[ch - 'a']++;
        }

        for(int i=0; i<n; i++){
            freqs2[s2[i]-'a']++;
        }

        // compare ONCE after loop
        if(equal(freqs1, freqs1+26, freqs2)) return true;

        //Main loop
        for(int i=n; i<m ; i++){
            freqs2[s2[i]-'a']++;
            freqs2[s2[i-n]-'a']--;
            if(equal(freqs1, freqs1+26, freqs2)) return true;
        }

        return false;

    }


};