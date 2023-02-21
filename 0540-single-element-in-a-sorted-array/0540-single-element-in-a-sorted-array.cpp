class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int high=n-1;
        int low=0;
        if(n==1)return nums[0];
        else if(nums[0]!=nums[1])return nums[0];
        else if(nums[high]!=nums[high-1])return nums[high];
        
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])return nums[mid];
            else if(mid%2==0 && nums[mid]==nums[mid+1] || mid%2!=0 && nums[mid]==nums[mid-1]){
                low=mid+1;
            }
    // each element is twice except one
    // we are standing at even index and mid==mid+1 means 1nums is left with pair(single num)
    // on odd index if mid==mid-1 means on left side all ele are paired
            else {
                high=mid-1;
            }
        }
        return -1;
    }
};