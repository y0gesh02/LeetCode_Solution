class Solution {
public:
    int solve(string&s ,char x,int k){
        int i=0,j=0;
        int n=s.size();
        int ans=0;
        int cnt=0;
        while(j<n){
            if(s[j]==x)cnt++;
            while(cnt>k){
                if(s[i]==x)cnt--;
                i++;
            }
            ans=max(ans,j-i+1);
         
        j++;
        }
        return ans;
    }
    int maxConsecutiveAnswers(string s, int k) {
       return max(solve( s,'T' ,k),solve(s,'F',k));
    }
};