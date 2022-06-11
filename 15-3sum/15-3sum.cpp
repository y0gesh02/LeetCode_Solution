class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         int n=nums.size();
        if(n==0 || n<3) // Atleast three elemnets needed for a triplet
            return {};
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
               continue;
            }
            int low=i+1;
            int high=n-1;
            while(low<high){
                if(nums[i] + nums[low] + nums[high]==0){
                    ans.push_back({nums[i] , nums[low] , nums[high]});
                    while(low<high && nums[low]==nums[low+1]){
                        low++;
                    }
                    while(high>low && nums[high]==nums[high-1]){
                        high--;
                    }
                    low++;
                    high--;
                }
                else if(nums[i] + nums[low] + nums[high]>0){
                    high--;
                }
                else{
                    low++;
                }
            }
        }
        return ans;
    }
};