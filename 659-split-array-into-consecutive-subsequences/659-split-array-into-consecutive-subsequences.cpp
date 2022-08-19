class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int>mp1,endele;
        for(auto it:nums){
            mp1[it]++;
        }
        for(auto it:nums){
            if(mp1[it]==0)continue;
            mp1[it]--;
            if(endele[it-1]>0){
                endele[it]++;
                endele[it-1]--;
            }
            else if(mp1[it+1]!=0 && mp1[it+2]){
                mp1[it+1]--;
                mp1[it+2]--;
                endele[it+2]++;
            }
            else {
                return false;
            }
        }
        return true;
        
    }
};