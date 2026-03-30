class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>row(9),col(9),box(9);
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char ch=board[i][j];
                if(ch=='.')
                {
                    continue;
                }
                if(row[i].count(ch))
                {
                    return false;
                }
                row[i].insert(ch);
                if(col[j].count(ch))
                {
                    return false;
                }
                col[j].insert(ch);
                int boxes=(i/3)*3+j/3;
                if(box[boxes].count(ch))
                {
                    return false;
                }
                box[boxes].insert(ch);
            }
        }
        return true;
    }
};
