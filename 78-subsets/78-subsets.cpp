class Solution {
public:
    void solve(int idx,vector<int>&nums,vector<vector<int>>&ans,vector<int>&subset){
        ans.push_back(subset);
        for(int i=idx;i<nums.size();i++){
            subset.push_back(nums[i]);
            solve(i+1,nums,ans,subset);
            subset.pop_back();
        }
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
         vector<int>subset;
         solve(0,nums,ans,subset);
         return ans;
    }
};