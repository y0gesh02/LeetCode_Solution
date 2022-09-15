class Solution {
public:
    void solve(vector<string>&ans,int n ,string curr,int open ,int close){
        if(curr.size()==2*n){
           ans.push_back(curr); 
            return ;
           
        }
        if(open<n)solve(ans,n,curr+ "(",open+1,close);
        if(close<open)solve(ans,n,curr+")",open,close+1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        
        solve(ans,n,"(",1,0);
        return ans;
    }
};