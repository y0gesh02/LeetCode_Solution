class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==key){
                int temp=nums[i+1];
                mp[temp]++;
            }
        }
        int maxi=0;
        int ans=0;
        for(auto it:mp){
            if(it.second>maxi){
             maxi=it.second;
             ans=it.first;
            }
        }
        return ans;
    }
};