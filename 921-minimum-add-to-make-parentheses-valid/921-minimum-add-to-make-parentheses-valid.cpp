class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int cnt=0;
        int miss_match=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
               cnt++;
            }
            else if( s[i]==')'&& cnt>0){
               cnt--;
             }
            else{
                //when ) comes ans cnt is zero
                miss_match++;
            }
           
         
        }
        return miss_match+cnt;
    }
};