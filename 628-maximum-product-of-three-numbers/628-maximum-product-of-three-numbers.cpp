class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
      
        // sort(nums.begin(),nums.end());
        int pro=1;
        int pro2=1;
          pro2*=nums[n-1]*nums[n-2]*nums[n-3];
         // for(int i=0;i<n;i++){
            pro*=nums[0]*nums[1]*nums[n-1];
             
        
        return max(pro2,pro);
    }
};