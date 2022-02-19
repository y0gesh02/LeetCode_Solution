class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt=0;
        string ans;
        for(auto it:s){
            if(it=='('){
                 if(cnt>0) ans+='(';
            cnt++;
             }
             else{
               if(cnt>1) ans+=')';
               cnt--;
            }
        }
        return ans;
    }
};