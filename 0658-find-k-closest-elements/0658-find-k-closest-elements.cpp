class Solution {
public:
    typedef pair<int,int>p;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<p>pq;

        for(int ele : arr){
            int dis=abs(x-ele);
            //distance , element 
            pq.push({dis,ele});
            if(pq.size()>k)pq.pop();
        }
        vector<int>ans;
        while(pq.size()>0){
            int x= pq.top().second;
            ans.push_back(x);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};