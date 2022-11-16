class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int gcdx=0;
            for(int j=i;j<n && nums[j]%k==0;j++){
                   gcdx=gcd(gcdx,nums[j]);
                   if(gcdx==k)ans++;
            }
        }
    return ans;
    }
};