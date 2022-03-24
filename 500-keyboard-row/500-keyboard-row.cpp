class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string r1="qwertyuiop",r2="asdfghjkl",r3="zxcvbnm";
         vector<string>ans;
        int a=0;
        int b=0;
        int c=0;
        for(auto it:words){
            for(int i=0;i<it.size();i++){
              if(r1.find(tolower(it[i])) != string::npos) a++;
              if(r2.find(tolower(it[i]))!=string::npos) b++;
              if(r3.find(tolower(it[i]))!=string::npos) c++;
            }
           if(it.size()==max(max(a,b),c))ans.push_back(it); 
           a=b=c=0;
        }
         return ans;          
    }
};