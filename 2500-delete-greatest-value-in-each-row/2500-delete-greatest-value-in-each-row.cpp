class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
         for (int i = 0; i < n; i ++) {
            sort(grid[i].begin(), grid[i].end());
        }
        int ans = 0;
        for (int j = 0; j < m; j ++) {
            int maxi=INT_MIN;
            for (int i = 0; i < n; i ++) {
                maxi = max(maxi, grid[i][j]);
            }
            ans += maxi;
        }
        return ans;
    }
};