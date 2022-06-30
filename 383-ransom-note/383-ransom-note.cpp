class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(auto it:magazine){
            mp[it]++;
        }
        int cnt=0;
        for(auto it:ransomNote){
            if(mp.find(it)!=mp.end()){
                cnt++;
                mp[it]--;
                if(mp[it]==0)mp.erase(it);
            }
        }
        return cnt==ransomNote.size();
    }
};