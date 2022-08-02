class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int m=matrix[0].size();
        priority_queue<int>max;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               max.push(matrix[i][j]);
                if(max.size()>k){
                    max.pop();
                }
            }
        }
        return max.top();
    }
};