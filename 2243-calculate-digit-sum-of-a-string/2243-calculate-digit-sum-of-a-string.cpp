class Solution {
public:
    string digitSum(string s, int k) {
        
        if(s.length()<=k)
            return s;
        int n=s.size();
        string ans="";
        int cnt=0;
        int len=k-1;
        
          for(int i=0;i<n;i++){
           if(len==0) {
              len=k-1;
               cnt+=s[i]-'0';
               ans+=to_string(cnt);
               cnt=0;
           }
            else{
              len--;
                cnt+=s[i]-'0';
                if(i==n-1){
                   ans+=to_string(cnt); 
                }
            }
        }
        if(ans.size()>k){
            ans=digitSum(ans,k);
        }
            
        
        return ans;
    }
};