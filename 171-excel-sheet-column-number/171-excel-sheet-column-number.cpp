class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        int a=0;
        int n=columnTitle.length();
       if(columnTitle.length() == 1) return columnTitle[0]-'A'+1;
        
       for(int i=0; i<n; i++){
           int a =(columnTitle[i]-'A'+1);
           ans = ans *26 + a;
       }
        // ans +=(columnTitle[n-1]-'A' + 1); 
        return ans;
    }
};