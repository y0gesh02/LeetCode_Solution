class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long ans=0;
        long long i=0,j=0;
       while(j<n){
            ans+=nums[j];
            if((j-i+1)*nums[j] - ans > k){
                ans-=nums[i];
                i++;
            }
           j++;
            
        }
        return j-i;
    }
};