class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        int i=0,j=0;
        int ans=0;
       while(j<n){
            if(nums[j]==0) cnt+=1;
            while(cnt>1){
               if(nums[i]==0){
                   cnt-=1;
                } 
                i++;
             }
            ans=max(ans,j-i);
             j++;
        }
        return ans;
    }
};