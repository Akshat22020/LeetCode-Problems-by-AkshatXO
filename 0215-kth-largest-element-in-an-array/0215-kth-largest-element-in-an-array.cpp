class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>h;
        for(auto x : nums){
            h.push(x);
        }

        int result=0;
        for(int i=0;i<k-1;i++){
            h.pop();
        }
        return h.top();
    }
};