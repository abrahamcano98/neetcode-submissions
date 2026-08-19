class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows=board.size();
        int cols=board[0].size();
        int val=0;
        unordered_map<int,int> hm_seen;
        for(int row=0; row<rows; row++)
        {
            for(int col=0; col<cols; col++)
            {
                if (board[row][col]!='.')
                {
                    val=board[row][col];
                    if(hm_seen[val]+1>1)
                    {
                        return false;
                    }
                    hm_seen[val]+=1;
                }
            }
            hm_seen.clear();
        }

        for(int col=0; col<cols; col++)
        {
            for(int row=0; row<rows; row++)
            {
                if (board[row][col]!='.')
                {
                    val=board[row][col];
                    if(hm_seen[val]+1>1)
                    {
                        return false;
                    }
                    hm_seen[val]+=1;
                }
            }
            hm_seen.clear(); 
        }

        for(int ro=0; ro<7; ro+=3)
        {
            for(int co=0; co<7; co+=3)
            {
                for(int row=ro; row<ro+3; row++)
                {
                    for (int col=co; col<co+3; col++)
                    {
                        if (board[row][col]!='.')
                        {
                            val=board[row][col];
                            if(hm_seen[val]+1>1)
                            {
                                return false;
                            }
                            hm_seen[val]+=1;
                        }
                    }
                }
                hm_seen.clear();
            }
        }

        return true;   
    }
};
