class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        
        int l_row=0;
        int r_row=rows-1;

        int l_col=0;
        int r_col=cols-1;
        int mid_row=0;
        while(l_row<=r_row)
        {
            mid_row=l_row+(r_row-l_row)/2;
            if(matrix[mid_row][0]==target)
            {
                return true;
            }
            else if(matrix[mid_row][0]>target)
            {
                r_row=mid_row-1;
            }
            else
            {
                l_row=mid_row+1;
            }
        }
        if(r_row<0)
        {
            return false;
        }

        while(l_col<=r_col)
        {
            int mid_col= l_col+(r_col-l_col)/2;
            if(matrix[r_row][mid_col]==target)
            {
                return true;
            }
            else if(matrix[r_row][mid_col]>target)
            {
                r_col=mid_col-1;
            }
            else
            {
                l_col=mid_col+1;
            }
        }
        
        return false;
    }
};
