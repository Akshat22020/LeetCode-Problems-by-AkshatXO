class Solution {
public:
    string sortt(string a ){
         sort(a.begin(), a.end());
         return a;
    }
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(string str : arr){
            string a = sortt(str);
            if(mp.find(a)==mp.end()) {
                vector<string> v;
                v.push_back(str);
                mp[a]=v;
            }
            else {
                mp[a].push_back(str);
            }
        }
        for(auto x :mp){
            vector<string>v=x.second;
            ans.push_back(v);
        }
        return ans;
    }
};