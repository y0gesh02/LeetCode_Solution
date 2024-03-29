//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void dfs(vector<vector<int>> &m, int n,int i,int j,string s,vector<vector<int>>vis,vector<string>&ans){
         if(i<0 || i>=n || j<0 || j>=n || m[i][j]==0 || vis[i][j]==1)return;
         vis[i][j]=1;
         if(i==n-1 && j==n-1) {
            ans.push_back(s);
            return;
        }
           dfs(m,n,i+1,j,s+'D',vis,ans);
           dfs(m,n,i-1,j,s+'U',vis,ans); 
           dfs(m,n,i,j+1,s+'R',vis,ans);
           dfs(m,n,i,j-1,s+'L',vis,ans);
        }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        vector<vector<int>> vis(n,vector<int>(n,0));
        dfs(m,n,0,0,"",vis,ans);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends