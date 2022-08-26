class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            int corr=nums[i];
            if(nums[i]<nums.size() && nums[i]!=nums[corr]){
                swap(nums[i],nums[corr]);
           }
            else{
                i++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i) return i; 
        }
        return n;
    }
};