class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans{{}};
        int x=0; int size=0;
        for(int i=0;i<nums.size();i++){
            x=(i >= 1 && nums[i] == nums[i - 1]) ? size : 0;
            size=ans.size();
            for(int j=x;j<size;j++){
                vector<int>temp=ans[j];
                temp.push_back(nums[i]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};