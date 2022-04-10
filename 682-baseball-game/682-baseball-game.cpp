class Solution {
public:
    int calPoints(vector<string>& s) {
       
        int sum=0;
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=="+"){
                int n=ans.size();
                ans.push_back(ans[n-1]+ans[n-2]);
            }
            else if(s[i]=="C"){
                ans.pop_back();
            }
            else if(s[i]=="D"){
               int rse=ans.back();
                ans.push_back(2*rse);
            }
            else{
              ans.push_back(stoi(s[i]));
                // sum+=stoi(s[i]);
            }
        }
        for(auto it:ans){
            sum+=it;
        }
        return sum;
    }
};