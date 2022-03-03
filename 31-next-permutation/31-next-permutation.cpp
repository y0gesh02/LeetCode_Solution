class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int numsLen = nums.size();
        int cnt=-1;
        for(int i=numsLen-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                cnt=i;
                break;
            }
        }
        if(cnt != -1){
            for(int i=numsLen-1; i>cnt; i--){
            if(nums[i]>nums[cnt]){
                swap(nums[i],nums[cnt]);
                break;
            }
        }
        }
        if(cnt != -1) reverse(nums.begin()+cnt+1,nums.end());
        else reverse(nums.begin(),nums.end());
    }
};