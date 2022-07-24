class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        map<vector<int>,int> r;
        for(int i=0;i<n;i++){
           r[grid[i]]++; 
        }
        int cnt=0;
        for(int j=0;j<n;j++){
            vector<int>temp;
            for(int i=0;i<n;i++){
               temp.push_back(grid[i][j]);
            }
            cnt+=r[temp];
        }

       
        return cnt;
    }
};