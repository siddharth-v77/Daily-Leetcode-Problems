class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_set<int> st;
        for( auto num : nums) st.insert(num);
        if(st.size() == nums.size()){
            return false;
        } 
        return true;
    }
};