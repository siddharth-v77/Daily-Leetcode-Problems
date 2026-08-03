typedef pair<int,int> pi;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> st;
       vector<int> ans;

       for(auto x: nums) st[x]++ ;

        priority_queue< pi ,vector<pi> ,greater<pi> > pq;
        
        for(auto x: st){
            pq.push(make_pair(x.second, x.first)) ;

            if(pq.size() > k) pq.pop() ;
        }

        while(!pq.empty()){
            pair<int,int> temp ;
            temp =pq.top();
            pq.pop();
            ans.push_back(temp.second);
        }
        return ans;
    }
};