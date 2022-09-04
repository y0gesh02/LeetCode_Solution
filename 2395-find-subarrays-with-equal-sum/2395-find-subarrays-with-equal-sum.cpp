class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
         int sum = 0; 
        int n=nums.size();

       int i=0,j=0;
        map<int,int>mp;
        while(j<n){
            sum+=nums[j];
            if(j-i+1==2) {
              mp[sum]++;
                 if(mp[sum]>1)return true;
                sum-=nums[i];
                i++;
            }    
            j++;
           
        }
        
   
       // for(auto it:mp)if(it.second>=2)return true;
        return false;
    }
};