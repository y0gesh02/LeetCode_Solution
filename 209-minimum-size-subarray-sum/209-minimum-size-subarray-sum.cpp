class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int n=nums.size();
        int mini=INT_MAX;int sum=0;
        while(j<n){
            sum+=nums[j];
            if(sum>=target){
               while(sum>=target){
                    mini=min(mini,j-i+1);
                   sum-=nums[i];
                    i++;
                }
            }
            j++;
        }
        if(mini==INT_MAX) mini=0;
        return mini;
    }
};