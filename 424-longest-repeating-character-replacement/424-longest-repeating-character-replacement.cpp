class Solution {
public:
    int characterReplacement(string s, int k) {
      unordered_map<char,int>mp;
      int n=s.size();
        int i=0;
        int j=0;
        int ans=0;
        int maxi=0;
        while(j<n){
            mp[s[j]]++;
            maxi=max(maxi,mp[s[j]]);
            if((j-i+1 )-maxi<=k){
              ans=max(ans,j-i+1 );
            }
            else{
                mp[s[i]]--;
                i++;
                }
                
            
            j++;
            
        }
        return ans;
    }
};