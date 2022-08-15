class Solution {
public:
    string largestOddNumber(string num) {
        //if((num-'0')%2)return num;
        string ans="";
//         for(auto it:num){
            
//             if((it-'0')%2){
//                 char t=it;
//                 ans=max(ans,t);
//             }
//         }
//         return ans;
        int n=num.size();
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2){
                ans=num.substr(0 , 0+i+1);
                break;
            }
        }
        return ans;
    }
};