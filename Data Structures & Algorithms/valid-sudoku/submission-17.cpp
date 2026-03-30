class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>left(9),right(9),box(9);
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char ch=board[i][j];
                if(ch=='.')
                {
                    continue;
                }
                if(left[i].count(ch))
                {
                    return false;
                }
                left[i].insert(ch);
                if(right[j].count(ch))
                {
                    return false;
                }
                right[j].insert(ch);
                int boxe=(i/3)*3+(j/3);
                if(box[boxe].count(ch))
                {
                    return false;
                }
                box[boxe].insert(ch);
            }
        }
        return true;
    }
};
