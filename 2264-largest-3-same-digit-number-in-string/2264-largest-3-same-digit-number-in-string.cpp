class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        int n=num.size();
        for(int i=0;i<n-2;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                if(ans==""){
                    ans+=num[i];
                        ans+=num[i+1];ans+=num[i+2];
                }
                else if(ans.back()<num[i]){
                    ans="";
                    ans+=num[i];
                        ans+=num[i+1];ans+=num[i+2];
                }
            }
        }
        return ans;
    }
};