class Solution {
public:
unordered_set<int> s;
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int a = 0 , b = 0;
        
        vector<int> ans;

        int actualsum =0 , exptsum =0 ;
        for(int i = 0 ; i < n ; i++){

            for(int j = 0; j<n ; j++){
                actualsum += grid[i][j];

                if(s.find(grid[i][j]) != s.end()){
                    a = grid[i][j];
                    ans.push_back(a);
                }
                else s.insert(grid[i][j]);
            }
        }

        exptsum = (n*n)*(n*n + 1 ) / 2;

        b = exptsum + a - actualsum;
        ans.push_back(b);

        return ans;
    }
};