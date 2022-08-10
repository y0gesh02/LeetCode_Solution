class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
            words.push_back(tmp);
        // words== "the" "sky" "is" "blue"
       // for(int i=0;i<words.size();i++) cout<<words[i]<<endl;
        string ans;
        for (int i = words.size() - 1; i >= 0; --i) {
            if (i != words.size() - 1) ans += " ";
            ans += words[i];
        }
        return ans;
//         string temp="";
//         string ans="";
//         int n=s.size();
//         int i=n-1;
//        while(i>=0){
//            while(i>=0 && s[i] == ' ') {
//                i--;
//            }
//             if(s[i]!=' ')temp+=s[i];
             
//             else  {
//                 reverse(temp.begin(),temp.end());
//                 ans+=temp;
//                 temp="";
//                 if(i!=0) ans+=' ';
//             }
//            i--;
//         }
       
//                 reverse(temp.begin(),temp.end());
//                 ans+=temp;
//                 temp="";
            
//       return ans;
    }
};