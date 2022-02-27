class Solution {
public:
    int minSteps(string s, string t) {
         int cnt=0;
        unordered_map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        for(auto it:t){
            mp[it]--;
        }
        for(auto i:mp){
         cnt+=abs(i.second);
        }
        return cnt;
    }
};