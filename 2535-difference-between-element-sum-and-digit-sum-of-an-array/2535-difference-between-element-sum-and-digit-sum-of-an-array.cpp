class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int sum2=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(nums[i]!=0){
                sum2+=nums[i]%10;
                nums[i]/=10;
            }
        }
        return abs(sum-sum2);
    }
};