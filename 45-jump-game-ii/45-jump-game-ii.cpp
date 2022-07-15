class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1) return 0;   //base case
        int currjump=nums[0];
        int n=nums.size();
        int i=0;
        int maxjumps=nums[0];
        int jumps=1;
        while(i<n-1){
            maxjumps=max(maxjumps,nums[i]+i);
            if(currjump==i){
                currjump=maxjumps;
                jumps++;
            }
            i++;
        }
        return jumps;
    }
};