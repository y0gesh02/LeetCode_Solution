class Solution {
public:
    bool isSubsequence(string s, string t) {
          int slen=s.length();
        int tlen=t.length();
        if(slen>tlen) return false;
        if(slen==0) return true;
        int i=0;
        int j=0;
        int cnt=0;
        while(i<slen && j<tlen){
            if(s[i]==t[j]){
                j++;
                i++;
                cnt+=1;
            }
            else{
                j++;
            }
        }
        return cnt==slen;
    }
};