class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string>ans;
        string str="";
        s+=' ';
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                ans.push_back(str);
                str="";
            }
            else {
                str+=s[i];
            }
        }
         if(p.size()!=ans.size()) return false;
        map<char,int>mpp;
        map<string,int>mps;
        for(int i=0;i<p.size();i++){
          
           if(mps[ans[i]] != mpp[p[i]]) {
               return false;
           }
            
            
            mps[ans[i]]=i+1;
              mpp[p[i]]=i+1;
    
          }
        return true;
    }
};