class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>>ans;
        int n=strs.size();
        unordered_map<string,vector<string>>mp;
        for(auto it:strs){
            string t=it;
            sort(it.begin(),it.end());
            
            mp[it].push_back(t);
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};