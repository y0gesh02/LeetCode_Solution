class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        


int c= 0;
        int n=nums.size();
       unordered_map<int,int> m;
       int sum=0;
       for(int i = 0;i<n;i++){
           sum+=nums[i];
           if(sum==k)
               c++;
           if(m.find(sum-k)!=m.end())
               c+=m[sum-k];
           
           m[sum]++;
       }
       return c;
    }
};