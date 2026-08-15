class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> rows_hs;
        unordered_set<int> cols_hs;
        int rows=matrix.size();
        int cols=matrix[0].size();
        for(int i=0; i<rows; i++)
        {
            for (int j=0; j<cols; j++)
            {
                if (matrix[i][j]==0)
                {
                    rows_hs.insert(i);
                    cols_hs.insert(j);
                }
            }
        }
        for(int row:rows_hs)
        {
            for(int col=0; col<cols; col++)
            {
                matrix[row][col]=0;
            }
        }
        for(int col:cols_hs)
        {
            for(int row=0; row<rows; row++)
            {
                matrix[row][col]=0;
            }
        }
        
    }
};
