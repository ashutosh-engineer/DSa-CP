//LC-438-Find all anagrams in a string
//Going to use frequency arrays;


// Reason is that to reduce hashing overhead by using hashmaps as well as arrays are fast because of the contigoues memeory location cpu doesnt need to work hard;

// But in hashtable there is key matching, and other issues also but timme complexity will be same in both that is Big O(1)

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=p.size();
        int k=s.size(); //Varibale in which i have to search combinations of n means p;
        vector<int>ans;
        if(n > k) return ans;

        //p is the defualt size of our window also i means varibale K;
        int freqs[26]={0};
        int freqp[26]={0};

        for(char ch:p){
            freqp[ch -'a']++;
        }

        //Remeber that we have to show the index where we got the string that index.

        for(int i=0; i<n; i++){
             //Here we are running checks just in window;
            freqs[s[i]-'a']++;
        }

        if(equal(freqs, freqs+26, freqp)){ //Here we are pushing if frequency matches in windows then push i;
                ans.push_back(0);
            }

        //Now checking for the whole window and here logic omes for skipping out
        //the window also.

        for(int i=n; i<k; i++){
            freqs[s[i]-'a']++;           // add incoming
            freqs[s[i-n]-'a']--;         // remove outgoing
            if(equal(freqs,freqs+26,freqp)) ans.push_back(i-n+1);  // compare & store
        }

        return ans;
      // p longer than s, no anagram possible
    }
};