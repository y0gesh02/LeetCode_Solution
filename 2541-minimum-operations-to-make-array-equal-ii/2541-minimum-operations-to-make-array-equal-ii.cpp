class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        long long up=0;
        long long down=0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]==nums2[i])continue;
             if(k==0)return -1;
            int t=abs(nums1[i]-nums2[i]);
            if(t%k==0){
                if(nums1[i]>nums2[i])down+=t/k;
                else up+=t/k;
            }
            else{
                return -1;
            }
        }
        return (up==down)?up:-1;
    }
};
