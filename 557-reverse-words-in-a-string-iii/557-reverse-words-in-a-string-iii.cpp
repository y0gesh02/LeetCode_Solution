class Solution {
public:
    string reverseWords(string s) {
        int last=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(s.begin()+last,s.begin()+i);
                last=i+1;
            }
            if(i==s.size()-1){
                reverse(s.begin()+last,s.end());
            }
        }
        return s;
    }
};