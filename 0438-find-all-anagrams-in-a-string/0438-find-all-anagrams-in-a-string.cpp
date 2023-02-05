class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        unordered_map<char,int>mp;
        vector<int>ans;
        if(m>n)return ans;
        vector<int> freq(26,0);
        vector<int> window(26,0);
        int j=m;
        for(int i=0;i<m;i++){
            freq[s[i]-'a']++;
            window[p[i]-'a']++;
        }
        int i=0;
        while(j<n){
          if(freq==window) ans.push_back(i);
          freq[s[j]-'a']++;
          freq[s[i]-'a']--;
          i++;
          j++;
        }
        if(freq==window) ans.push_back(i);
        return ans;
    }
    
};