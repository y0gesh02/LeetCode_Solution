class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 0;
        sort(nums.begin(),nums.end());
        if(nums[0]==nums[n-1])return 0;
       
        
        
        int cnt=0;
        int mid=nums[n/2];
        for(int i=0;i<nums.size();i++){
          cnt+=abs(mid-nums[i]);
        }
        return cnt;
    }
};
//7 8 8 0 2