class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int i=0,j=0;
        int n=nums.size();
         multiset<int> m;
        while(j<n){
           m.insert(nums[j]);
            if(*m.rbegin()-*m.begin()>limit){
                m.erase(m.find(nums[i]));
                i++;
            }
            j++;
        }
        return j-i;
    }
};