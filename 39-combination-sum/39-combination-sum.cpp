class Solution {
public:
    void solve(int idx,vector<vector<int>>&ans, vector<int>&temp,vector<int>& nums,int k,int&n ){
        if(k==0){
            ans.push_back(temp);
            return;
        }
        if(k<0){
            return;
        }
         for(int i=idx;i<n;i++){
              temp.push_back(nums[i]);
              solve(i,ans,temp,nums,k-nums[i],n);
             
              temp.pop_back();
          }  
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,ans,temp,nums,target,n);
        return ans;
    }
};