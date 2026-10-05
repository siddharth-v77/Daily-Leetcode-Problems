class Solution {
public:
bool checkpalin(int i , int j , string &s){
    if(i >=j){
        return true;
    }

    if(s[i] == s[j]){
        return checkpalin(i+1 , j-1 ,s) ;
    }
    return false;
}
    string longestPalindrome(string s) {
        int n = s.length();
        int maxlen = INT_MIN;
        int sp = 0 ;

        for(int i = 0 ; i < n ; i++){
            for(int j = i ; j< n ; j++){
                if(checkpalin(i , j ,s)){
                    if(j-i+1 > maxlen){
                        maxlen = j-i+1;
                        sp=i;
                    }
                }
            }
        }
        return s.substr(sp,maxlen);
    }
};