class Solution {
public:
    int characterReplacement(string s, int k) {
     vector<int>freq(26,0);
      int n=s.size();
        int i=0;
        int j=0;
        int ans=0;
        int maxi=0;
        while(j<n){
            freq[s[j]-'A']++;
            maxi=max(maxi,freq[s[j]-'A']);
            if((j-i+1 )-maxi<=k){
              ans=max(ans,j-i+1 );
            }
            else{
                freq[s[i]-'A']--;
                i++;
                }
            j++;
            
        }
        return ans;
    }
};