class Solution {
public:
    bool check(stack<char>st ,string part){
        int ps=part.size();
        int i=ps-1;
        while(i>=0 && st.top()==part[i]){
            st.pop();
            i--;
        }
        return i==-1;
    }
    string removeOccurrences(string s, string part) {
        stack<char>st;
        int n=s.size();
        int m=part.size();
        for(int i=0;i<n;i++){
            st.push(s[i]);
            if(st.size()>=m){
                if(check(st,part)){
                    int t=m;
                    while(t--)st.pop();
                }
             }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};