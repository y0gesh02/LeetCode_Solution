class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int prefix=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
           sum-=nums[i];
            if(prefix==sum){
                return i;
            }
            prefix+=nums[i];
        }
        return -1;
    }
};
//12 
//2 