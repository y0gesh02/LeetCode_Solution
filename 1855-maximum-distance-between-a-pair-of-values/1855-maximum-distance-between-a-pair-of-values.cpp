class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int maxi=0;
        
           int l=0,h=0;
            while(l<n && h<m){
                
                
                 if(nums1[l]>nums2[h]){
                    l++;
                }
                else {
                    maxi=max(h-l,maxi);
                    h++;
                }
                
            }
        
        return maxi;
    }
};