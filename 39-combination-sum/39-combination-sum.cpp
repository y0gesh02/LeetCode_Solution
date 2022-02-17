class Solution {
public:
     void subset(int idx,vector<int>& candidates,int target,vector<vector<int>>&ans,vector<int>&temp){
        if(target==0){
        ans.push_back(temp);
            return;
        }
        if(target<0){
            return;
        }
        for(int i=idx;i<candidates.size();i++){
            temp.push_back(candidates[i]);
            subset(i,candidates,target-candidates[i],ans,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>>ans;
         vector<int>temp;
        subset(0,candidates,target,ans,temp);
        return ans;
        
    }
};