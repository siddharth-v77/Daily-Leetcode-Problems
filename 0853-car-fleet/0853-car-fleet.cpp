class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> car;
        for(int i = 0; i<position.size(); i++){
            double time = (double) (target-position[i])/speed[i];
            car.push_back({position[i],time});
        }

        sort(car.begin() , car.end() , greater<pair<int,double>>());

        int count =0 ;
        double prevtime =0;

        for( auto i : car){
            if(i.second > prevtime){
                count++;
                prevtime = i.second;
            }

        }
        return count;

    }
};