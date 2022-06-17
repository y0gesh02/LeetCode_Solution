class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int n=nums.size();
        int low=0;
        int high=n-1;
        int resfirst=-1;
        int reslast=-1;
        vector<int>ans;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                resfirst=mid;
                high=mid-1;
                
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        ans.push_back(resfirst);
         low=0;
         high=n-1;
       
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                reslast=mid;
                low=mid+1;
                
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            }
         ans.push_back(reslast);
        return ans;
         
    }
};