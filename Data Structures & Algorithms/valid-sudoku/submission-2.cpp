class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>boxes(9),rows(9),cols(9);
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='.')
                {
                    continue;
                }
                if(rows[i].count(board[i][j])){
                    return false;
                }
                rows[i].insert(board[i][j]);
                if(cols[j].count(board[i][j]))
                {
                    return false;
                }
                cols[j].insert(board[i][j]);
                int box=(i/3)*3+(j/3);
                if(boxes[box].count(board[i][j]))
                {
                    return false;
                }
                boxes[box].insert(board[i][j]);
            }
        }
        return true;
    }
};
