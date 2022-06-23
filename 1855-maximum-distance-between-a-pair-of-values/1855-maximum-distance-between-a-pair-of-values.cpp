class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
           int l=i,h=m-1;
            while(l<=h){
                int mid=(l+h)/2;
                if(nums1[i]<=nums2[mid]){
                    maxi=max(mid-i,maxi);
                        l=mid+1;
                }
                else if(nums1[i]>nums2[mid]){
                    h=mid-1;
                }
                
            }
        }
        return maxi==INT_MIN?0:maxi;
    }
};