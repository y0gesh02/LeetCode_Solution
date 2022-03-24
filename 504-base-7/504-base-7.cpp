class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        string ans;
        bool flag=0;
        if(num<0) num*=-1,flag=1;  
        // handling the negative numbers
        
        while(num>0){
            ans=to_string(num%7)+ans; // remainder of the string and number is decremented to num/7 until the number is zero.
            
            num/=7;
        }
        
        if(flag) ans='-'+ans;
        return ans;
    
    }
};