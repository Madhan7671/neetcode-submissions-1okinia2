class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        if(n!=m)
        {
            return;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            int low=0;
            int high=n-1;
            while(low<high)
            {
                swap(matrix[i][low],matrix[i][high]);
                low++;
                high--;
            }
        }
    }
};
