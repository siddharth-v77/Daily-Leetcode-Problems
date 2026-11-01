class Solution {
public:

int solve(vector<int>& nums, int target , int reach , int i){
   if (i == nums.size()) {
            return (reach == target);
        }


    int plus = solve(nums , target , reach + nums[i] , i+1);

    int sub = solve(nums ,target , reach - nums[i] , i+1);

    return plus + sub ;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int reach = 0 ;
        return solve(nums , target , reach , 0);
    }
};