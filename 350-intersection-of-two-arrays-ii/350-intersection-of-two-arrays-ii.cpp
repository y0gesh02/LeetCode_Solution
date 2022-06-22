class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        unordered_map<int ,int>mp;
        for(auto it :nums1){
            mp[it]++;
        }
        // int i=0;
        // int j=0;
        // while(i<nums1.size() && j<nums2.size()){
        //     if(nums1[i]==nums2[j])ans.push_back(nums1[i]);
        // }
        int n=nums1.size();
        int m=nums2.size();
     
        for(int i=0;i<m;i++){
            if( mp[nums2[i]]>0){
                mp[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        }
        
        return ans;
    }
};