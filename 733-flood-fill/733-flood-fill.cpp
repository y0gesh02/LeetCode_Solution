class Solution {
public:
   
    void dfs(int i,int j,int val,vector<vector<int>>& image,int color){
         int n=image.size();
         int m=image[0].size();
         if(i<0 || j<0 ||i>=n || j>=m || image[i][j]!=val || image[i][j]==color){
             return ;
         }
        image[i][j]=color;
        dfs(i-1,j,val,image,color);
        dfs(i+1,j,val,image,color);
        dfs(i,j-1,val,image,color);
        dfs(i,j+1,val,image,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int val=image[sr][sc];
        dfs(sr,sc,val,image,color);
        return image;
    }
};