class Solution {
public:
vector<vector<int>>board;
int m,n;
int ans(int i,int j)
{
    if(i<0 || j<0 || i>=m || j>=n || board[i][j]==0)
    {
        return 0;
    }
    board[i][j]=0;
    int res=1;
    res+=ans(i+1,j);
    res+=ans(i-1,j);
    res+=ans(i,j+1);
    res+=ans(i,j-1);
    return(res);
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        board=grid;
        m=board.size();
        n=board[0].size();
        int res=0;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]==1)
                {
                    res=max(res,ans(i,j));
                }
            }
        }
        return res;
    }
};
