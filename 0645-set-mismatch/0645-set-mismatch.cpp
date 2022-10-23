class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
          int i=0;
  while(i<nums.size()){
      int correcti=nums[i]-1;
      if(nums[i]!=nums[correcti] ){
          swap(nums[i],nums[correcti]);
      }
      else{
          i++;
      }
  }
   vector<int>ans;     
  for(int i=0;i<nums.size();i++){
      if(nums[i]!=i+1){
          ans.push_back(nums[i]);
          ans.push_back(i+1);
          break;
      }
  }
        return ans;
    }
};