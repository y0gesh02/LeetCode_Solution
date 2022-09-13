class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i=0, j=0,cnt=0,res=0;
        int n=nums.size();
        while(j<n){
            if(nums[j]&1) {
                k--;
                cnt=0;
            }
            if(k==0){
                while(k==0){
                  cnt++;
                  if(nums[i]&1){
                    k++;
                  }
                  i++;
                }
            }
            res+=cnt;
            j++;
        }
        return res;
    }
};
