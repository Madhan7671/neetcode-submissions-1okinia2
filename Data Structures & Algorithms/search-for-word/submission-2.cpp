class Solution {
public:
vector<vector<char>>grid;
string words;
int m,n;
bool fn(int i,int j,int index)
{
    if(index==words.size())
    {
        return true;
    }
    if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!=words[index])
    {
        return false;
    }
    char ch=grid[i][j];
    grid[i][j]='#';
    bool found=(fn(i+1,j,index+1) || fn(i-1,j,index+1) || fn(i,j+1,index+1)|| fn(i,j-1,index+1));
    grid[i][j]=ch;
    return found;
}
    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();
        grid=board;
        words=word;
        n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(fn(i,j,0))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
