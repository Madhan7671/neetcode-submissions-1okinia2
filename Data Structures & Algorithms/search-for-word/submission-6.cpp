class Solution {
public:
vector<vector<char>>grid;
string s;
bool fn(int i,int j,int index)
{
    if(index==s.size())
    {
        return true;
    }
    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]!=s[index])
    {
        return false;
    }
    char ch=grid[i][j];
    grid[i][j]='#';
    bool found=(fn(i+1,j,index+1) || fn(i-1,j,index+1) || fn(i,j+1,index+1) || fn(i,j-1,index+1));
    grid[i][j]=ch;
    return found;
}
    bool exist(vector<vector<char>>& board, string word) {
        grid=board;
        s=word;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
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
