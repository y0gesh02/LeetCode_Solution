class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int j=0;
       // string t="";
        for(int i=0;i<n;i++){
          if(s[i]==' '){
              reverse(s.begin()+j,s.begin()+i);
              j=i+1;
          }
            if(i==n-1){
                reverse(s.begin()+j,s.end());
            }
        }
        return s;
    }
};
//Let's take LeetCode contest