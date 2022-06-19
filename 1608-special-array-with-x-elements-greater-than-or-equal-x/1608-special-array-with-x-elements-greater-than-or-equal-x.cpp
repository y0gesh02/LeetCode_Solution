class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        // 0 0 3 4 4;
        if(nums[0]>=n) return n;
        int i=0;
        int j=n-1;
            //int ans;
            while(i<=j){
                int mid=(i+j)/2;
                if(nums[mid]>=(n-mid)&&nums[mid-1] < (n-mid)){
                    return n-mid;
                }
                else if(nums[mid]>=(n-mid)){
                    j=mid-1;
                }
                else{
                    i=mid+1;
                }
            }
        return -1;
    }
};