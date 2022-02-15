class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt=0, miss_match=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')cnt++;
            else if( s[i]==')'&& cnt>0) cnt--;
             else  miss_match++;
        }
        return miss_match+cnt;
    }
};