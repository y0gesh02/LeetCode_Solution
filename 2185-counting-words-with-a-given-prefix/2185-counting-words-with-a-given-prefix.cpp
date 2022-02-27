class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int len=pref.size();
        int cnt=0;
        for(auto word:words){
          string sub=word.substr(0,len);
            if(sub==pref)cnt++;
            
        }
        return cnt;
    }
};