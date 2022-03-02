class Solution {
public:
    bool isSubsequence(string s, string t) {
        int slen=s.length();
        int tlen=t.length();
        if(slen>tlen) return false;
        if(slen==0) return true;
    
        int cnt=0;
        for(int i=0; i<tlen; i++){
            if(s[cnt]==t[i]){
                cnt++;
                if(cnt==slen) return true;
            }
        }
        return false;
    }
};