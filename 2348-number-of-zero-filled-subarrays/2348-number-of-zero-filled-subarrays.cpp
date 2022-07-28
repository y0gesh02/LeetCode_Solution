class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long n=nums.size();
        long long ans=0;
        long long i=0;
        long long cnt=0;
        while(i<n){
            
           if(nums[i]==0){
                 
               cnt+=1;
               ans+=cnt;
                
            }
            else{
                cnt=0;
            }
            i+=1;
          
        }
        return ans;
    }
};
