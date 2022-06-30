class Solution {
public:
    int dfs(vector<vector<int>>& grid,int i,int j){
         int n=grid.size();
         int m=grid[0].size();
         //int cnt=1;
      
         if(i<0 || j<0 ||i>=n || j>=m || grid[i][j]==0){
            
             return 0;
         }
       grid[i][j] = 0;
      //  int l= +1;
      //  int r =+1;
      //   int s=dfs(grid,i,j-1)+1;
      //   int d=dfs(grid,i,j+1)+1;
      //       cnt+=l+r+s+d;
      // //  if(grid)
        return 1+dfs(grid,i-1,j)+dfs(grid,i+1,j)+dfs(grid,i,j-1)+dfs(grid,i,j+1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         int n=grid.size();
         int m=grid[0].size();
         int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                     maxi=max(maxi,dfs(grid,i,j));
                }
                
            }
        }
       
        return maxi;
    }
};