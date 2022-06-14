class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        if(nums[0]>x && nums[n-1]>x ) return -1;
         int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
       // cout<<sum;
        if(sum<x){
            return -1;
        }
        int target=sum-x;
       // cout<<target;
        int i=0;
        int j=0;
        int curr_sum=0;
        int mini=-1;
        while(i<n){
            curr_sum+=nums[i];
           
             if(curr_sum>target){
                while(curr_sum>target && j<=i){
                  curr_sum-=nums[j];
                  j++;
                }
            }
             if(curr_sum==target){
               mini=max(mini,i-j+1); 
            }
            i++;
        }
        return n-mini;
    }
};