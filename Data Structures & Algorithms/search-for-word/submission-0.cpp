class Solution {
public:
int m,n;
bool dfs(vector<vector<char>>& board, string word,int index,int i,int j)
{
    if(index==word.length())
    {
        return true;
    }
    if(i<0 ||j<0 || i>=m || j>=n || board[i][j]!=word[index])
    {
        return false;
    }
    char ch=board[i][j];
    board[i][j]='#';
    bool found=dfs(board,word,index+1,i+1,j) || 
    dfs(board,word,index+1,i-1,j)||
    dfs(board,word,index+1,i,j+1)||
    dfs(board,word,index+1,i,j-1);
    board[i][j]=ch;
    return found;
}
    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();
        n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(dfs(board,word,0,i,j))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
