class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        int cnt=0; int rank=0;
        
        for (auto it:nums) {
            if(it==target)cnt++;
            if(it<target)rank++;
        }
        while(cnt--){
            ans.push_back(rank);
            rank++;
        }
        return ans;
    }
};