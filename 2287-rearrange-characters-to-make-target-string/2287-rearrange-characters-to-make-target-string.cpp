class Solution {
public:
    int rearrangeCharacters(string s, string t) {
        unordered_map<char,int>mp;
          unordered_map<char,int>mp2;
        for(auto it:s){
            mp[it]++;
        }
        for(auto it:t){
            mp2[it]++;
        }
         // "abbaccaddaeea"
         //  "aaaaa--5"
        int mini=10000;
        for(auto it:mp2){
            // if(mp2.find(it.first)!=mp2.end()){
                  
                mini=min(mp[it.first]/it.second,mini);
          
            
        }
        return mini;
    }
};