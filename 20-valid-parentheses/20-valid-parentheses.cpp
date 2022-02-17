class Solution {
public:
    bool isValid(string s) {
         stack<int>st;
        int n=s.size();

        for(int i=0;i<n;i++){
            if(s[i]=='('|| s[i]=='{'|| s[i]=='['){
                st.push(s[i]);
                continue;
             }
           
           else  if(st.empty() ||  (st.top()=='(' && s[i]!=')') || (st.top()=='{' && s[i]!='}') || (st.top()=='[' && s[i]!=']')){
               return false;
            }
            
            
            st.pop();    //if control reaches to that line, it means we have got the right                              //pair of brackets, so just pop it.
            }
        return st.empty();
    }
};