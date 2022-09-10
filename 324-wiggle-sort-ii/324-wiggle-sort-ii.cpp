class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans(n);
        int i=1;int j=n-1;
        while(i<n){
            ans[i]=nums[j];
            j--;
            i+=2;
        }
        i=0;
        while(i<n ){
            ans[i]=nums[j];
            i+=2;
            j--;
        }
        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }
    }
};
