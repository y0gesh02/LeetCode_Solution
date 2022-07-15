class Solution {
public:
    bool canJump(vector<int>& nums) {
        int minijumps=0;
        for(int i=nums.size()-2;i>=0;i--){
            minijumps++;
            if(nums[i]>=minijumps) minijumps=0;
        }
        return minijumps==0;
    }
};