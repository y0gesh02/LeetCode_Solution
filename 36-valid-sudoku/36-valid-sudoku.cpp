class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>>row(9);
        vector<unordered_set<int>>col(9);
        vector<unordered_set<int>>box(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                int t=board[i][j];
                if(row[i].count(t) || col[j].count(t)|| box[((i/3)*3)+(j/3)].count(t)){
                    return false;
                }
                row[i].insert(t);
                col[j].insert(t);
                box[((i/3)*3)+(j/3)].insert(t);
            }
        }
        return true;
    }
};