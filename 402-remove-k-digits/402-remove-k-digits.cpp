class Solution {
public:
    string removeKdigits(string num, int k) {
        if (num.length() == k) return "0";
        string ans="";
       for (int i = 0; i < num.length(); i++) {
        while (!ans.empty() && ans.back() > num[i] && k) {
               ans.pop_back();                                  
               k--;                                   
        }
           if(!ans.empty() || num[i]!='0'){
               ans.push_back(num[i]);
           }
       }
        while(k>0 && !ans.empty() ){
            ans.pop_back(); 
            k--;
            
        }
        return ans.empty() ? "0" : ans;
    }
};