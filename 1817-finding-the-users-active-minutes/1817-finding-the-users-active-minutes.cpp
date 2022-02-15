class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
       unordered_map<int,unordered_set<int>> map;
        vector<int>ans(k,0);
        int j=0;
        for(auto it:logs){
              map[it[0]].insert(it[1]);
            
        }
        for(auto i: map){
            ans[i.second.size()-1]++;
        }
        return ans;
        
    }
};