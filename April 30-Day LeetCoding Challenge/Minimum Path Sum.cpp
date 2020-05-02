class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
       if(grid.size()==0)
            return 0;
        int row=grid.size();
        int col=grid[0].size();
        int t[row][col];
        t[0][0]=grid[0][0];
        for(int i=1;i<row;i++)
        {
                    t[i][0]=t[i-1][0]+grid[i][0];
        }
        for(int j=1;j<col;j++)
            {
                    t[0][j]=grid[0][j]+t[0][j-1];
        }
        for(int i=1;i<row;i++)
        {
            for(int j=1;j<col;j++)
            {
                    t[i][j]=grid[i][j]+min(t[i][j-1],t[i-1][j]);       
            }
        }
      return t[row-1][col-1];
        
    }
};
