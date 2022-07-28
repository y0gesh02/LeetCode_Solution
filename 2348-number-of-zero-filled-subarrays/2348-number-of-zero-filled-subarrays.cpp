class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long n=nums.size();
        long long ans=0;
        long long i=0;
        
        while(i<n){
            long long cnt=0;
           if(nums[i]==0){
                 
                while(i<n && nums[i]==0 ){
                    cnt+=1;
                    i+=1;
                }
                ans+=(cnt*(cnt+1))/2;
                
            }
            else{
                i+=1;
            }
            
          
        }
        return ans;
    }
};
