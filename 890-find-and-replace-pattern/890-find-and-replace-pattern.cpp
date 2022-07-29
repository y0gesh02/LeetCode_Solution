class Solution {
 bool isSamePattern(string s1, string s2){
        int n = s1.size();
		unordered_map< char,char > mp;
        vector<bool> visited (26,false); 
        for(int i = 0; i < n; i++){
           if( mp[s1[i]] && mp[s1[i]]!=s2[i])
                return false;
            if( !mp[s1[i]] && visited[s2[i]-'a'])
                return false;
            mp[s1[i]] = s2[i], visited[ s2[i]-'a' ] = true;
        }
        return true;
    }
   // mee abb
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(string word : words)
            if(isSamePattern(word,pattern)) ans.emplace_back(word);
        return ans;
    }
};