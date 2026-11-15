class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int currsum = 0 ;

        for(int num : nums){
            currsum += num ;
            ans =max(ans , currsum) ;

            if(currsum < 0 ){
                currsum = 0 ;
            }
        }
        return ans;
    }
};