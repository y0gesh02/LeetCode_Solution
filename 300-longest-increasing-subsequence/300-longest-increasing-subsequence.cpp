class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]>ans.back()){
                ans.push_back(nums[i]);
            }
            else{
                //finding llowest posible place for ele
               int idx=lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
                
               ans[idx]=nums[i];

            }
        }

        return ans.size();
    }
};
//O(NLOGN)
//2 9  