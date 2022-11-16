class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int lc=1;
            for(int j=i;j<n;j++){
                   lc=lcm(lc,nums[j]);
                   if(lc>k)break;
                   if(lc==k)ans++;
            }
        }
    return ans;
    }
};