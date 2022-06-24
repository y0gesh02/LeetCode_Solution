class Solution {
public:
    void rotate(vector<int>& nums, int k) {
          if(k>nums.size())
            k = k % nums.size(); 
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
         reverse(nums.begin()+k,nums.end());   
    }
};
// 7 6 5 4 3 2 1
//