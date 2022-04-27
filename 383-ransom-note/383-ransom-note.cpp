class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int>mp;
        
        for(auto it:magazine){
            mp[it]++;
            
        }
      
        for(auto x:ransomNote){
            if(mp.find(x)!=mp.end()){
                mp[x]--;
                if(mp[x]==0){
                    mp.erase(x);
                }
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};