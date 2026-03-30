/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
Node* helper(vector<vector<int>>& grid,int r,int c,int n)
{
    bool same=true;
    int first=grid[r][c];
    for(int i=r;i<r+n;i++)
    {
        for(int j=c;j<c+n;j++)
        {
            if(grid[i][j]!=first)
            {
                same=false;
                break;
            }
        }
        if(!same)
        {
            break;
        }
    }
    if(same)
    {
        return(new Node(first==1,true));
    }
    int half=(n/2);
    Node* tl=helper(grid,r,c,half);
    Node* tr=helper(grid,r,c+half,half);
    Node* bl=helper(grid,r+half,c,half);
    Node* br=helper(grid,r+half,c+half,half);
    return(new Node(true,false,tl,tr,bl,br));
}
    Node* construct(vector<vector<int>>& grid) {
        return helper(grid,0,0,grid.size());
    }
};