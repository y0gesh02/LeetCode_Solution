class Solution {
public:
    int countHillValley(vector<int>& nums) {
         int cnt = 0;
        for(int i = 1;i < nums.size()-1;i++){
            if(nums[i-1] < nums[i]){
                int j = i+1;
                for(;j < nums.size() && nums[j] == nums[i];j++);
                if(j < nums.size() && nums[i] > nums[j]){
                    cnt++;
                }
                i = j-1;
            }
            if(nums[i-1] > nums[i]){
                int j = i+1;
                for(;j <nums.size() && nums[j] == nums[i];j++);
                if(j <nums.size() && nums[i] < nums[j]){
                    cnt++;
                }
                i = j-1;
            }
        }
        return cnt;
    }
};