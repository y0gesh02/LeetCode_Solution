class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
       unordered_map<int,int>mp;
        int maxi=0;
        int i=0;
        int j=0;
        int sum=0;
        while(j<nums.size()){
            sum+=nums[j];
            mp[nums[j]]++;
            if(mp.size()<j-i+1){
                while(mp.size()<j-i+1){
                    mp[nums[i]]--;
                    sum-=nums[i];
                    if(mp[nums[i]]==0) mp.erase(nums[i]);
                    i++;
                }
                 
            }
            if(mp.size()==j-i+1){
                //int temp=accumulate(nums.begin()+i, nums.begin()+j, 0);
               maxi=max(maxi,sum);
              
            }
           j++;  
           
        }
        return maxi;
    }
};
//  int i=0,j=0;
//         unordered_map<char,int>mp;
//         int maxi=0;
//         while(j<s.size()){
//             mp[s[j]]++;
//             if(mp.size()==j-i+1){
//                 maxi=max(maxi,(j-i+1));
//                 j++;
//             }
//             else if(mp.size()<j-i+1){
//                 while(mp.size()<j-i+1){
//                     mp[s[i]]--;
//                     if(mp[s[i]]==0){
//                         mp.erase(s[i]);
//                     }
//                     i++;
//                  }
//                 j++;
//             }
            
//         }
//         return maxi;