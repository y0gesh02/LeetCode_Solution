class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int l = 0;
    int r = n-1;
    int ans = 0;
    int mod = 1e9 + 7;
    vector<int> pow(n,1);
    for(int i=1; i<n; i++){
        pow[i] = (pow[i-1] * 2) % mod;   
    }
    while(l <= r){
        if(nums[l] + nums[r] > target){
            r--;
        }
        else{
            int rem=r-l;
            ans = (ans + pow[rem]) % mod;
            l++;
        }
    }
    
    return ans;
    }
};
// for each elements in the subarray A[i+1] ~ A[j],
// we can pick or not pick,
// so there are 2 ^ (j - i) subsequences in total.
// So we can update res = (res + 2 ^ (j - i)) % mod.