class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        unordered_map<int,int>mp;
        unordered_map<int,int>mp2;
        for(auto it:nums1){
            mp[it]++;
        }
         for(auto it:nums2){
            mp2[it]++;
        }
        vector<int>ans1;
        for(auto it:nums1){
            if(!mp2.count(it)){
                 auto x = find(ans1.begin(), ans1.end(), it);
                    if (x == ans1.end()){
                
                   ans1.push_back(it); 
                }
                
            }
        }
        ans.push_back(ans1);
        vector<int>ans2;
        for(auto it:nums2){
            if(!mp.count(it)){
                  auto x = find(ans2.begin(), ans2.end(), it);
                    if (x == ans2.end()){
                
                   ans2.push_back(it); 
                }
            }
        }
        ans.push_back(ans2);
        return ans;
    }
};