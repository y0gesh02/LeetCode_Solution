class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int ans=0;
        for(auto it:nums)ans^=it;
        return ans;
    }
};