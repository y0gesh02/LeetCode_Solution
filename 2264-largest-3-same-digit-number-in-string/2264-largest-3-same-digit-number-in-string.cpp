class Solution {
public:
    string largestGoodInteger(string s) {
        int n=s.size();
        string maxi="";
     
        for(int i=0;i<n;i++){
            if(i<n-2 && s[i]==s[i+1] && s[i]==s[i+2]){
               string str ={s[i],s[i+1],s[i+2]};
                
                maxi=max(maxi,str);
                // str.clear();
            }
        }
        // string ans=to_string(maxi);
        return maxi;
    }
};