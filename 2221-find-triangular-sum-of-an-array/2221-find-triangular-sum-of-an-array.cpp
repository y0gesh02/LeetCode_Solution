class Solution {
public:
    int triangularSum(vector<int>& nums) {
         while(nums.size()!=1){
          vector<int>nums1;
          for(int i=1;i<nums.size();i++){
            nums1.push_back((nums[i]+nums[i-1])%10);
          }
          nums=nums1;
        }
      return nums[0];
    }
};