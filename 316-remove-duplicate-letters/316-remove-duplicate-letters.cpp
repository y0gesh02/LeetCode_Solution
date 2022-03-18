class Solution {
public:
    string removeDuplicateLetters(string s) {
             unordered_map<char, int>freq;
        unordered_map<char, bool>visited;
        string res;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
         for(int i=0;i<s.size();i++){
             freq[s[i]]--;
             if(visited[s[i]]==true)continue;
             while(!res.empty() && s[i]<res.back() && freq[res.back()]>0){
                 visited[res.back()]=false;
                 res.pop_back();
             }
             res+=s[i];
             visited[s[i]]=true;
         }
        return res;
    }
};