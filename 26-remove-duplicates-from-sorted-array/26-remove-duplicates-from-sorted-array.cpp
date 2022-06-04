class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         
        int n=nums.size();
         if(n<1)return 0;
        int k=1;
        int j=1;
        for(int i=1;i<n;i++){
            // if(nums[i]==nums[i+1]){
            //     nums[i]=
            // }
            if(nums[i]!=nums[i-1] ){
               nums[j]=nums[i]; 
                   j++;
                   k++;
            }
        }
        return k;
    }
};