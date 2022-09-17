class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;int j=0;
        int n=nums.size();
        int maxi=-1;
        int cnt0=0;
        while(j<n){
            if(nums[j]==0)cnt0++;
            while(cnt0>k){
                if(nums[i]==0)cnt0--;
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};