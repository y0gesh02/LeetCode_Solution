class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans(2);
        unordered_set<int>mp;
        unordered_set<int>mp2;
        for(auto it:nums1){
            mp.insert(it);
        }
         for(auto it:nums2){
            mp2.insert(it);
        }
        
        for(auto it:mp){
            if(!mp2.count(it)){
                 ans[0].push_back(it); 
            }
        }
        for(auto it:mp2){
            if(!mp.count(it)){
                  ans[1].push_back(it); 
            }
        }
        
    
        return ans;
    }
};