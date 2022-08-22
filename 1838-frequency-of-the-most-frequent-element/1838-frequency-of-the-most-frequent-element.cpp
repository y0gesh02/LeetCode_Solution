class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long ans=0;
        long long i=0,j=0;
       while(j<n){
            ans+=nums[j];
            if((j-i+1)*nums[j] - ans > k){
                ans-=nums[i];
                i++;
            }
           j++;
            
        }
        return j-i;
    }
};
// Why is (j - i + 1) * A[j]  - sum <= k valid?
// (j - i + 1) is the length of the window [i, j]. We want to increase all the numbers in the window to equal A[j], the number of operations needed is (j - i + 1) * A[j] - sum which should be <= k. For example, assume the window is [1,2,3], increasing all the numbers to 3 will take 3 * 3 - (1 + 2 + 3) operations.