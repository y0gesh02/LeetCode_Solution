class Solution {
public:
    bool checkRecord(string s) {
        int a=0;
        int l=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') a+=1;
            else if(s[i]=='L'){
                if(i+2<s.size() && s[i+1]=='L' && s[i+2]=='L'){
                    return false;
                }
            }
            
            if(a>=2) return false;
        }
        // if( a >=3) return false;
        return true ;
    }
};