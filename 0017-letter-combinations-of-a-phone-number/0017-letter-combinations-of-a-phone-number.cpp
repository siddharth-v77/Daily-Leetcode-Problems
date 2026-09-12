class Solution {
public:


void solve(string &digits , int idx ,string temp,vector<string> &ans ,unordered_map<char, string> mp){
    if(idx >= digits.length()){
        ans.push_back(temp);
        return ;
    }
    
    char ch = digits[idx];
    string str = mp[ch];
    for(int i =0; i<str.length(); i++){
        temp.push_back(str[i]);
        solve(digits , idx+1 ,temp,ans,mp);
        temp.pop_back();
    }
}

    vector<string> letterCombinations(string digits) {
        string temp ="";
        vector<string> ans;
unordered_map<char, string> mp ;
mp['2'] = "abc";
mp['3'] = "def";
mp['4'] = "ghi";
mp['5'] = "jkl";
mp['6'] = "mno";
mp['7'] = "pqrs";
mp['8'] = "tuv";
mp['9'] = "wxyz";

        solve(digits , 0 ,temp, ans , mp);
        return ans;
    }
};