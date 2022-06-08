class Solution {
public:
   bool pal (string s){
       int i=0;
       int j=s.size()-1;
       while(i<j){
           if(s[i]!=s[j]){
               return false;
           }
           i++;
           j--;
       }
       return true;
   }
    int removePalindromeSub(string s) {
        if(pal(s)){
            return 1;
        }
        return 2;
    }
};