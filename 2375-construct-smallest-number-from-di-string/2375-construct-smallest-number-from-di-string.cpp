class Solution {
public:
    string smallestNumber(string pattern) {
        string ans="";
        int n=pattern.size();
        stack<char>st;
        for(int i=0;i<=n;i++){
            st.push('1'+i);
           
            if(i==n || pattern[i]=='I'){
                while(!st.empty()){
                    
                ans+=st.top();
                st.pop();
                }
            }
        }
        return ans;
    }
};