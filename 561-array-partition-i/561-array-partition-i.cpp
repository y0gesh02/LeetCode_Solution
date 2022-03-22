class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int mini=0;
        for(int i=0;i<nums.size()-1;i+=2){
            sum+=min(nums[i+1],nums[i]);
            mini=0;
        }
        return sum;
    }
};