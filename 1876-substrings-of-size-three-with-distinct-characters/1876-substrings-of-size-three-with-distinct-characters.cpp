class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.size(), i=0, j=0, cnt=0;
        map<char,int>st;
        while(j<n){
            st[s[j]]++;
            if(j-i+1==3){
              if(st.size()==3)cnt++;
              if(st[s[i]]==1)st.erase(s[i]);
              else st[s[i]]--;
              i++;
             }
            j++;
        }
        return cnt;
    }
};