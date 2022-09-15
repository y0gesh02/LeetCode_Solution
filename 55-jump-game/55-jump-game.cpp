class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int mini=0;
        for(int i=n-2;i>=0;i--){
            mini++;
            if(nums[i]>=mini)mini=0;
        }
        return mini==0;
    }
};