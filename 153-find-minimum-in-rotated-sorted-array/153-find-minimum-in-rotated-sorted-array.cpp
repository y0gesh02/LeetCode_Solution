class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int l=0;
        int n=nums.size();
        if(n==1)return nums[l];
        int h=n-1;
        int mini=INT_MAX;
        while(l<h){
        if(nums[l] < nums[h]) {
            return nums[l];
        }
        int mid=(l+h)/2;
        if(nums[mid]<=nums[h]){
                h=mid;
        }
            else{
                l=mid+1;
            }
        }
        return nums[l];
    }
};