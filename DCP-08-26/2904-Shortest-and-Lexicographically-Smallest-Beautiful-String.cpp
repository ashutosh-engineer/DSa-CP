class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        string ans="";
        for(int i=0; i<n; i++){
            int k_counter=0;//Placing it here cause we actually need to reset it ;
            for(int j=i; j<n; j++){
                if(s[j]=='1'){
                    k_counter++;
                }

                if(k_counter == k){
                    string cur = s.substr(i, j-i+1); // I will be teh starting point and j-i+1 will be last point till the string is captured;
                    if(ans.empty() || cur.length() < ans.length() || (cur.length() == ans.length() && cur < ans)){
                        ans = cur;
                    }
                }
            }
        }

        return ans;//string builded that is ans;
        
    }
};