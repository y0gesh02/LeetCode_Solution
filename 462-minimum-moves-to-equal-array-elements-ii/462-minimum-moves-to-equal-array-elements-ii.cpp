class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 0;
        nth_element(nums.begin(), nums.begin()+(n/2), nums.end());
        int cnt=0;
        int mid=nums[n/2];
        for(int i=0;i<nums.size();i++){
          cnt+=abs(mid-nums[i]);
        }
        return cnt;
    }
};
//7 8 8 0 2