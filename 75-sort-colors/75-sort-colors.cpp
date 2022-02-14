class Solution {
public:
    void sortColors(vector<int>& nums) {
        int startPointer=0,midPointer=0, endPointer=nums.size()-1; 
        
        while(midPointer<=endPointer){
            if(nums[midPointer]==0) {
                swap(nums[midPointer],nums[startPointer]);
                startPointer++;
                midPointer++;
            }
            else if(nums[midPointer]==2){
                swap(nums[midPointer],nums[endPointer]);
                endPointer--;
            }
            else {
                midPointer++;
            }
        }
    }
};