class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
      int n=nums.size();
         int evenSum = 0;
        // calculate the sum of all even numbers
        for (auto x : nums) {
            if (x % 2 == 0) {
                evenSum += x;
            }
        }
        for(auto it:queries){
            int val=it[0];int idx=it[1];
            if(nums[idx]%2==0)evenSum-=nums[idx]; // nums[idx] even hai to evensum se - bcz uska yogdana tha
            nums[idx]+=val;   // add val acc. to ques.
            if(nums[idx]%2==0)evenSum+=nums[idx];   //if nums[idx]even ban gaya to we have to add me evensum. 
            ans.push_back(evenSum);
            
        }
        return ans;
    }
};