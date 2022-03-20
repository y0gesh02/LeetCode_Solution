class Solution {
public:
    bool check(string s,int i,int j){
        while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
            else{
                return false;
            }
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        if (s.empty()) return true; 
        int i=0;
        int j=s.size()-1;
        int cnt=0;
        while(i<=j){
           if(s[i]==s[j]){
             i++;
             j--;
               continue;
           }
           else 
           {
               return check(s,i+1,j) || check(s,i,j-1);
           }
          
           
            
        }

        return true;
    }
};