class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,int>mp;
         for(int i=0;i<nums.size();i++){
              int tempsum=target-nums[i];
            if(mp.find(tempsum)!=mp.end()){

                  return {mp[tempsum],i};
                }
            mp[nums[i]]=i;
         }
         return {-1};
    
    }
};