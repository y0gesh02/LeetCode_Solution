class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>diff(n,vector<int>(m,0));
       vector<int> row1(n), row0(n), col1(m), col0(m);
        
        for(int i=0; i<n; i++){
           int r0=0, r1=0;
            for(int j=0; j<m; j++){
                if(grid[i][j]==0)
                    r0++;
                else r1++;
                    
            }
            row1[i] = r1;
            row0[i] = r0;
        }
         for(int j=0; j<m; j++){
           int c0=0, c1=0;
            for(int i=0; i<n; i++){
                if(grid[i][j]==0)
                    c0++;
                else c1++;
                    
            }
            col0[j] = c0;
            col1[j] = c1;
        }
         for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                diff[i][j] = row1[i] + col1[j] - row0[i] - col0[j];
            }
         }
        
        return diff;
    }
};