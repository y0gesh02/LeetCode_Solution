class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> sh;
        for(int i=0;i<n;i++){
           
            sh.push_back(nums[i]);
            sh.push_back(nums[n+i]);
        }
        return sh;
    }
};