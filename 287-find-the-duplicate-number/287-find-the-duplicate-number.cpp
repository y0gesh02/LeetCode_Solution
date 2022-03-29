class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
            int i=0;
        while(i<nums.size()){
            int corri=nums[i]-1;
            if(nums[corri]!=nums[i]){
                swap(nums[i],nums[corri]);
            }
            else{
                i++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1)return nums[i];
        }
        return -1;
    }
};