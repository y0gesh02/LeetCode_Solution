class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
           
            if(nums[i]<nums[i-1] ){
                cnt++;
               if(i-2<0 || nums[i-2] <= nums[i])  nums[i-1] = nums[i];  
               else  nums[i] = nums[i-1]; 
            }
            
        }
        return cnt<=1;
    }
};
// 3 4 2 3
//4 2 3