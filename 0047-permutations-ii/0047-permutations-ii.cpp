class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
            vector<vector<int>>ans;
        solve(nums,ans,0);
        return ans; 
    }

     void solve(vector<int>& nums, vector<vector<int>>&ans ,int index){
        if(index==nums.size()){
            ans.push_back(nums);
                return ;
        }
         set<int>st;
for(int i=index;i<nums.size();i++){
    if(st.find(nums[i])!=st.end())continue;
    st.insert(nums[i]);
    swap(nums[i],nums[index]);
     solve(nums, ans, index+1);
    swap(nums[index], nums[i]);
}
     }
    
};


        
   