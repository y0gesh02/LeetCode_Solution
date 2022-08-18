class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
       int n=nums.size();
        int freq=n/3;
        map<int ,int>mp;
       
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
         for(auto it:mp){
             if(it.second>freq)ans.push_back(it.first);
         }
        return ans;
    }
};