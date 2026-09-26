class Solution {
public:
    typedef pair<int,int> p;

    struct Compare {
        bool operator()(const p& a, const p& b) {
            if(a.first == b.first)
                return a.second < b.second; // larger element first

            return a.first > b.first; // smaller frequency first
        }
    };

    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int, int> mp;

        for(int x : nums) {
            mp[x]++;
        }

        priority_queue<p, vector<p>, Compare> pq;

        for(auto x : mp) {
            pq.push({x.second, x.first});
        }

        vector<int> ans;

        while(!pq.empty()) {
            int freq = pq.top().first;
            int ele = pq.top().second;
            pq.pop();

            for(int i = 0; i < freq; i++) {
                ans.push_back(ele);
            }
        }

        return ans;
    }
};