class Solution {
public:
    void subset(int index,vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp){
        ans.push_back(temp);// push the current subset into the resultant array
        for(int i=index;i<nums.size();i++){
            temp.push_back(nums[i]);// add the current element to consider the subsets corresponding to it
              subset(i+1,nums,ans,temp);
              temp.pop_back(); // as this has been used, pop it
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>>ans;
         vector<int>temp;
         subset(0,nums,ans,temp);
         return ans;
     }

};