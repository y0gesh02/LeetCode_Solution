class Solution {
public:
    int countAsterisks(string s) {
        int n=s.size();
        int cnt=0;
        int temp=0;
        for(int i=0;i<n;i++){
             if(s[i]=='|') temp+=1;
             if(s[i]=='*' && temp%2==0) cnt+=1;
        }
        return cnt;
    }
};