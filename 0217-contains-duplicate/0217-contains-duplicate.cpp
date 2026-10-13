class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>u;
        for(int i=0;i<nums.size();i++){
            u.insert(nums[i]);
        }

        return (nums.size()!=u.size());
    }
};