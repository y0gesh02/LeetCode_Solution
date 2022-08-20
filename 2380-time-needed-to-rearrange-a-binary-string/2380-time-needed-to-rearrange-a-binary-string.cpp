class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int n=s.size();
        int cnt=0;
        int cnt2=0;
        int i=0;
        while(true){
            cnt2=0;
            for(int i=0;i<n-1;i++){
               if(s[i]=='0'&& s[i+1]=='1'){
                s[i]='1';
                s[i+1]='0';
                cnt2=1;
                 i++;
              }
                
            }
           if(cnt2==0)return cnt;
           cnt++;
        }
        return cnt;
    }
};
    