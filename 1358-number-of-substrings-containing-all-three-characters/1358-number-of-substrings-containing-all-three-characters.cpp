class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0;
        int j=0;
        int n=s.size();
        int cnt[]={0,0,0};
        int ans=0,cntt=0;
        while(j<n){
            cnt[s[j]-'a']++;
            if(cnt[0] && cnt[1] && cnt[2]){
               while(cnt[0] && cnt[1] && cnt[2]){
                   cntt++;
                   cnt[s[i]-'a']--;
                   i++;
               } 
            }
            ans+=cntt;
            j++;
        }
        return ans;
    }
};