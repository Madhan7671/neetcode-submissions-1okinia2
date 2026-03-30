class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        for(int i=0;i<m;i++)
        {
            for(int j=i+1;j<m;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0;i<m;i++)
        {
            int low=0;
            int high=m-1;
            while(low<high)
            {
                swap(matrix[i][low],matrix[i][high]);
                low++;
                high--;
            }
        }
    }
};
