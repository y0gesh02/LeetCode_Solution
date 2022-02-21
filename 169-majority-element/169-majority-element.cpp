class Solution {
public:
    int majorityElement(vector<int>& nums) {
       //  map<int,int> m;
       //  int n=nums.size()/2;
       //  for(int i=0; i<nums.size(); i++){
       //      m[nums[i]]++;
       //  }
       //  for(auto it:m){
       //      if((it.second)>(n)) return it.first;
       //  }
       // return -1;
        int n=nums.size()/2;
        sort(nums.begin(),nums.end());
        return nums[n];
    }
};