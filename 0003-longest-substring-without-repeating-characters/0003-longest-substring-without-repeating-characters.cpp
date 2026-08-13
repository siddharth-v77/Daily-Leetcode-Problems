class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i =0 , j = 1 , l = 1 ,n =s.size();

        unordered_set<char> un;
        if (n == 0){
            return 0;
        }
        un.insert(s[i]);
        while(j<n & i<=j){
            while(j<n && un.find(s[j]) == un.end()){
                un.insert(s[j]);
                j++;
            }

            if(j-i > l){
                l=j-i;
            }

            else {
                un.erase(s[i]);
                i++;
            }

        }
        return l;
    }
};