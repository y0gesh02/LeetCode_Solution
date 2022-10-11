class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        return max(robber(nums,0,n-1),robber(nums,1,n));
    }
        int robber(vector<int>& nums,int s,int n) {
        
        int prev1=0;
        int prev2=0;
        for(int i=s;i<n;i++){
            int pick=nums[i]+prev2;
            int notpick=prev1;
            int maxi=max(pick,notpick);
            prev2=prev1;
            prev1=maxi;
          
        }
        return prev1;
    }
};
