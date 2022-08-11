class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int n=s.size();
        int i=0,j=0;
        while(i<n){
           while(i<n && s[i] == ' ') i++;
           if(i>=n) break;
           j=i+1;
           while(j<n && s[j]!=' ') j++;
           // substr(begin, lenght);
           string temp=s.substr(i,j-i);
           if(ans.size()==0) ans=temp;
           else ans=temp+" "+ans;
            i=j+1;
    }
       return ans;
    }
};