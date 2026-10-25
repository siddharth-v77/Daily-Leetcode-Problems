class Solution {
public:

int t[201][20001];
bool solve(vector<int>& nums , int x , int i ){
    if( x == 0 ){
        return true ;
    }

if(t[i][x] != -1){
    return t[i][x];
}
    if( i >= nums.size()){
        return 0 ;
    }
bool take = false;
    if(nums[i] <= x){
take = solve(nums ,x-nums[i] , i+1);
    }

    
   bool not_take = solve(nums , x , i+1);

    return t[i][x] = take || not_take;
    }


    bool canPartition(vector<int>& nums) {
        memset( t , -1 , sizeof(t));
        
        int sum = accumulate(nums.begin() , nums.end() , 0) ;
        
        int x = sum/2 ;
        if(sum % 2 != 0){
            return false;
        }
        return solve(nums , x  , 0 ) ; 
    }
};




//     int  solve(vector<int>& nums , int sum , int i ){
//     if( i >= nums.size()){
//         return 0 ;
//     }

//     int take = nums[i] + solve(nums ,sum-nums[i] , i+1) ;

//     int skip = solve(nums , sum , i+1);

//     if(take == sum/2 || skip == sum/2){
//         return 1 ;
//     }
// }