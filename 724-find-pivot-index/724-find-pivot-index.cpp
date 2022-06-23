class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int totsum=0;
        for(int i=0;i<n;i++){
            totsum+=nums[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            totsum-=nums[i];
            if(sum==totsum){
                return i;
            }
            sum+=nums[i];
            
            
            
        }
        
        return -1;
    }
};
// 8 +9+11=28

// 11 17