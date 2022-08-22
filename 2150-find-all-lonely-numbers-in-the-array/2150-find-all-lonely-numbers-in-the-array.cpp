class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>ans;
         int n=nums.size();
        unordered_map<int ,int>mp;
        for(auto it:nums)mp[it]++;
        for(int i=0;i<n;i++){
            if(!mp[nums[i]+1] && !mp[nums[i]-1] && mp[nums[i]]==1)ans.push_back(nums[i]);
        }
        return ans;
    }
};