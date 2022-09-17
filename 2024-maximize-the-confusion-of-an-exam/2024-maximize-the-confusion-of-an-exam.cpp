class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int i=0;
        int n=s.size();
        int j=0;
        int ans=0;
        int cntT=0,cntF=0;
        while(j<n){
            if(s[j]=='T')cntT++;
            else cntF++;
      
            while(min(cntT,cntF)>k){
              if(s[i]=='T')cntT--;
              else cntF--;
                  i++;
                
            }
             ans=max(ans,j-i+1); 
           
            
        j++;
        }
        return ans;
    }
};