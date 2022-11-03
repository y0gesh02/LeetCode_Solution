class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end()); 
        vector<vector<int>>ans;
        solve(nums,ans,0);
        return ans; 
    }
private:
    void solve(vector<int> nums, vector<vector<int>>&ans ,int index){
        if(index==nums.size()){
            ans.push_back(nums);
                return ;
        }
        for(int i=index;i<nums.size();i++){
            if(i!=index && nums[i]==nums[index])continue;
            swap(nums[i],nums[index]);
            solve(nums, ans, index+1);
            //swap(nums[index], nums[i]);
        }
     }
    
};


        
   