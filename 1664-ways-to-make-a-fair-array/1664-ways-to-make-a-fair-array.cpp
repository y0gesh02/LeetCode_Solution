class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n=nums.size();
        int evensum=0, oddsum=0;
        int evenprefix=0,oddprefix=0;
        for(int i=0;i<n;i++){
            if(i%2==0)    evensum+=nums[i];
            else   oddsum+=nums[i]; 
            
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(i%2==0)evensum-=nums[i];
            else oddsum-=nums[i];
            
            if(evensum+oddprefix==oddsum+evenprefix)ans+=1;
            if(i%2==0)evenprefix+=nums[i];
            else oddprefix+=nums[i];
            
        }
        return ans; 
    }
};