class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       vector<vector<int>>ans (n,vector<int>(n,0));
        int rowstart=0,rowend=n-1,colstart=0,colend=n-1;
        int count=1;
        int total=n*n;
        while(count<=total){
            for(int i=colstart; count<=total && i<=colend;i++){
                ans[rowstart][i]=count;
                count++;
            }
            rowstart++;
           for(int i=rowstart; count<=total && i<=rowend;i++){
                ans[i][colend]=count;
               count++;
            }
            colend--;
             for(int i=colend; count<=total && i>=colstart;i--){
                ans[rowend][i]=count;
                 count++;
            }
            rowend--;
             for(int i=rowend;  count<=total && i>=rowstart;i--){
                ans[i][colstart]=count;
                 count++;
            }
           colstart++;
        }
        return ans;
    }
};