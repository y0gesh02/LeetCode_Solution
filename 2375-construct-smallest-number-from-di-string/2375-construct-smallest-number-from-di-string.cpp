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

// 1 2 3 4 5 6 7 8 9
// D D I D D I D D

// when i==n || pattern[i]=='I'
// Reverse all numbers between "I".
//     3 2 1 6 5 4 9 8 7