class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         
         if(strs.empty()) return "";

        string curr = strs[0];

        for(int i = 1 ; i < strs.size() ; i++){
            string s2 = strs[i] ;
            int j = 0 ;
          while(j < curr.length() && j < s2.length() && curr[j] == s2[j]){
                
                j++;
            }
            curr = curr.substr(0 , j);
            
        }

        return curr;
    }
};