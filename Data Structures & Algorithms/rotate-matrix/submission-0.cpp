class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int temp=0;
        for(int i=0; i<rows; i++)
            {
                for(int j=i+1; j<cols; j++)
                {
                    temp=matrix[i][j];
                    matrix[i][j]=matrix[j][i];
                    matrix[j][i]=temp;
                }
            }
        for(int i=0; i<cols/2; i++)
        {
            for(int j=0; j<rows; j++)
            {
                temp=matrix[j][i];
                matrix[j][i]=matrix[j][cols-i-1];
                matrix[j][cols-i-1]=temp;
            }
        }
    }
};
