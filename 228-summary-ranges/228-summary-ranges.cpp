class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n=nums.size();
        if(n==0)return {};
        
        for(int i=0;i<n;i++){
            int start=nums[i];
             while(i+1< n && nums[i+1] == nums[i]+1) {  
                i++;
            }
            
            if(start!=nums[i]){
                string s=to_string(start);
                string e=to_string(nums[i]);
               string f = s+ "->" + e;
                ans.push_back(f);
            }
            else{
                 string temp=to_string(start);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};