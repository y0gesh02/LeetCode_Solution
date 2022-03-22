class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1)return 0;
        sort(nums.begin(),nums.end());
       int i=0;
        int j=0;
        int mini = INT_MAX;
        while(j<n){
            if(j-i+1<k)j++;
            else if(j-i+1==k){
                int diff=abs(nums[j]-nums[i]);
                mini=min(mini,diff);
                i++;
                j++;
            }
//             else{
                
//             }
        }
        return mini;
    }
};