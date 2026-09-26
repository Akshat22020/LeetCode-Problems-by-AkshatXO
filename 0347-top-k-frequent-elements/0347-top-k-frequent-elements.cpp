class Solution {
public:
    typedef pair<int,int>p; //defining the type name macron for the pair<int,int> in the whole code!
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int , int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue< p , vector<p> ,greater<p>> pq;
        
        for(auto x : mp){
            int first=x.first;
            int freq = x.second;
            pair<int,int>p={freq,first};
            pq.push(p);
            // pq.push({x.second , x.first};

            if(pq.size()>k) pq.pop();
        }

        vector<int>ans;
        while(pq.size()>0){
            int ele=pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;

    }
};