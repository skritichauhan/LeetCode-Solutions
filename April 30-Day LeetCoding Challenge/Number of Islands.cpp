        class Solution {
public:
    int numIslands(vector<vector<char>>& grid)
    {
        int count=0;
        int n=grid.size();
        if(n==0)
            return 0;
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<grid[0].size();j++)
                if(grid[i][j]=='1')
                {
                     DFSMarking(grid,i,j);
                    count++;
                }    
        }
        return count;
    }
    
    void DFSMarking(vector<vector<char>>&grid,int i,int j)
    {
        int n=grid.size();
        int m=grid[0].size();
        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] != '1') return;
    grid[i][j] = '0';
    DFSMarking(grid, i + 1, j);
    DFSMarking(grid, i - 1, j);
    DFSMarking(grid, i, j + 1);
    DFSMarking(grid, i, j - 1);
    }
};
