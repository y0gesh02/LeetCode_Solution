class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int N = nums.size();
        if (k == 0) return N >= 1 ? nums[0] : -1; // if no moves allowed, return the topmost element if any
        if (k == 1) return N == 1 ? -1 : nums[1]; // if only one move is allowed, we can only remove the topmost element
        if (N == 1) return k % 2 == 0 ? nums[0] : -1; // if `N == 1`, we can return the topmost element if `k` is a even number (keep removing the topmost element and adding it back).
        int maxi = *max_element(begin(nums), begin(nums) + min(k - 1, N)); // we can take `min(k-1, N)` elements and put back the largest one on the top
        if(k>N)return maxi;
        if (k < N) maxi = max(maxi, nums[k]); // If `k < N`, we can take all the topmost `k` elements and return the one left at the top
        return maxi;
    }
};