class Solution {
public:
    int subarraysWithKDistinct(vector<int>& A, int k) {
        return atMostK(A, k) - atMostK(A, k - 1);
    }
    int atMostK(vector<int>& nums, int k){
        int i=0,j=0;
        unordered_map<int,int>mp;
        int cnt=0;
        while(j<nums.size()){
            mp[nums[j]]++;
            if(mp.size()>k){
                while(mp.size()>k){
                   mp[nums[i]]--;
                   if(mp[nums[i]]==0){
                      mp.erase(nums[i]);
                    }
                    i++; 
                }
             }
          cnt+=(j-i+1);
          j++;
        }
        return cnt;
    
    }
};